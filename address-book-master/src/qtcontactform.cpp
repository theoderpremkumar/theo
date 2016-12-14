#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
      bgField(new QLineEdit())
{
    addRow("<font color='blue'>*First Name</font>", firstNameField);
    firstNameField->setPlaceholderText("Enter First name");
    addRow("<font color='blue'>*Last Name</font>", lastNameField);
    lastNameField->setPlaceholderText("Enter Last name");
    addRow("<font color='blue'>*Address</font>", addressField);
    addressField->setPlaceholderText("Enter address");
    addRow("<font color='blue'>*Phone Number</font>", phoneNumberField);
    phoneNumberField->setPlaceholderText("Enter phoneNumber");
    addRow("<font color='blue'>*Email</font>", emailField);
    emailField->setPlaceholderText("Enter email");
    addRow("<font color='blue'>*bg</font>", bgField);
    bgField->setPlaceholderText("Enter bg");
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    bgField->setText("");
}
