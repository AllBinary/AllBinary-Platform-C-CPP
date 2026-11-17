// Generated Code Do Not Modify
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"


static BasicUserRoleFactory* BasicUserRoleFactory_instance;


void BasicUserRoleFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicUserRoleFactory_instance = BasicUserRoleFactory_new();
}

void BasicUserRoleFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicUserRoleFactory", nullptr);
}

static void BasicUserRoleFactory_initFields(BasicUserRoleFactory* this) {
    this->INACTIVITYTIMEOUT = 360000000LL;
    this->CUSTOMERTIMEOUT = 360000000LL;
    this->CUSTOMERMAXSESSIONTIME = 360000000LL;
    this->MAXSESSIONTIME = 360000000LL;
    this->INSTALLER = BasicUserRole_new("Installer", 16, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->ADMINISTRATOR = BasicUserRole_new("Administrator", 0, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->CUSTOMER = BasicUserRole_new5("CustomerUser", "Customer User", 1, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);
    this->SUBSCRIBERCUSTOMER = BasicUserRole_new5("SubscriberUser", "Subscriber User", 2, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);
    this->WHOLESALECUSTOMER = BasicUserRole_new5("WholesaleUser", "Wholesale User", 3, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);
    this->STOREMANAGER = BasicUserRole_new5("StoreManager", "Store Manager", 4, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->PRODUCTMANAGER = BasicUserRole_new5("ProductManager", "Product Manager", 5, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->CUSTOMERMANAGER = BasicUserRole_new5("UserManager", "User Manager", 6, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->PAYMENTMANAGER = BasicUserRole_new5("PaymentManager", "Payment Manager", 7, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->ORDERMANAGER = BasicUserRole_new5("OrderManager", "Order Manager", 8, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->WEBMANAGER = BasicUserRole_new5("WebManager", "Web Manager", 9, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->REVIEWER = BasicUserRole_new("Reviewer", 10, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->SHIPPING = BasicUserRole_new("Shipping", 11, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->ADJUSTER = BasicUserRole_new("Adjuster", 12, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->WORKFLOWEDITOR = BasicUserRole_new5("WorkFlowEditor", "WorkFlow Editor", 13, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->WIZARD = BasicUserRole_new5("WizardUser", "Wizard User", 14, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
    this->VIEWEDITOR = BasicUserRole_new5("ViewEditor", "View Editor", 15, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);
}

void BasicUserRoleFactory_init(BasicUserRoleFactory* this) {
    BasicUserRoleFactory_register();
    BasicUserRoleFactory_initFields(this);
}

BasicUserRoleFactory* BasicUserRoleFactory_new(void) {
    BasicUserRoleFactory* this = java_object_alloc(sizeof(BasicUserRoleFactory), "BasicUserRoleFactory");
    BasicUserRoleFactory_init(this);
    return this;
}


BasicUserRoleFactory* BasicUserRoleFactory_getInstance(void) {
        return (BasicUserRoleFactory_staticInit(), BasicUserRoleFactory_instance);
}

