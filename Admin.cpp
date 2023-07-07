#include "Admin.hpp"

const std::string Admin::MASTER_USER = "admin";
const std::string Admin::MASTER_SENHA = "admin";

Admin::Admin() {}
Admin::~Admin() {}

bool Admin::isMasterAdmin(const std::string& user, const std::string& senha) {
    return (user == MASTER_USER && senha == MASTER_SENHA);
}
