#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class Account
{
public:
    Account() = default;
    Account(const QString login, const QString pass);

    QString GetLogin() const;
    QString GetPass() const;
    void SetLogin(const QString& login);
    void SetPass(const QString& pass);

private:
    QString login_;
    QString pass_;
};

#endif // ACCOUNT_H
