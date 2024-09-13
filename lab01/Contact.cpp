class Contact {
public:
    std::string name;
    std::string phone;
    std::string email;

    // Конструктор, принимающий параметры по константной ссылке
    Contact(const std::string& name, const std::string& phone, const std::string& email)
        : name(name), phone(phone), email(email) {}
};

