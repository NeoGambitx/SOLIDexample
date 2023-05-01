#include <string>

class EmailSender {
public:
virtual void sendEmail(std::string recipient, std::string subject, std::string body) = 0;
};

class RealEmailSender : public EmailSender {
public:
virtual void sendEmail(std::string recipient, std::string subject, std::string body) override {
// code to send email using a real email service
}
};

class MockEmailSender : public EmailSender {
public:
virtual void sendEmail(std::string recipient, std::string subject, std::string body) override {
// code to mock sending email for testing purposes
}
};

class NotificationService {
public:
NotificationService(EmailSender& emailSender) : emailSender(emailSender) {}

void sendNotification(std::string recipient, std::string message) {
    emailSender.sendEmail(recipient, "Notification", message);
}
private:
EmailSender& emailSender;
};

//Here, we use dependency injection to inject the `EmailSender` abstraction into the `NotificationService` class.
//We also create two implementations of the `EmailSender` interface (`RealEmailSender` and `MockEmailSender`) 
//to provide the actual email sending functionality and a mock email sending functionality for testing purposes, respectively.