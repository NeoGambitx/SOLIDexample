//Violation: A class that depends on concrete implementations of other classes.
#include <string>

class EmailSender {
public:
    void sendEmail(std::string recipient, std::string subject, std::string body) {
        // code to send email
    }
};

class NotificationService {
public:
    void sendNotification(std::string recipient, std::string message) {
        EmailSender emailSender;
        emailSender.sendEmail(recipient, "Notification", message);
    }
};

//Here, the NotificationService class depends on the concrete implementation of the EmailSender class. 
//This violates the DIP because the class should depend on abstractions, not concretions.
//Solution: Use dependency injection to inject abstractions