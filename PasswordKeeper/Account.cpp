#include "Account.h"

Account::Account(const QString login, const QString pass) : login_(login), pass_(pass)
{
}

QString Account::GetLogin() const
{
    return login_;
}

QString Account::GetPass() const
{
    return pass_;
}

void Account::SetLogin(const QString &login)
{
    login_ = login;
}

void Account::SetPass(const QString &pass)
{
    pass_ = pass;
}
