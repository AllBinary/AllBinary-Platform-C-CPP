
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoleFactory.h"

class AdminRoleFactory
            : public Object
         {
        

    private: static const instance: AdminRoleFactory = new AdminRoleFactory();

    public static AdminRoleFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdminRoleFactory.instance;
    
}


    private: const adminRoles: Vector<any> = new Vector<any>();

    private: const storeAdminRoles: Vector<any> = new Vector<any>();

    private: const storeManagementRoles: Vector<any> = new Vector<any>();

    private: const productManagementRoles: Vector<any> = new Vector<any>();

    private: const reviewManagementRoles: Vector<any> = new Vector<any>();

    private: const customerManagementRoles: Vector<any> = new Vector<any>();

    private: const workflowManagementRoles: Vector<any> = new Vector<any>();

    private: const orderManagementRoles: Vector<any> = new Vector<any>();

    private: const adjusterManagementRoles: Vector<any> = new Vector<any>();

    private: const shippingManagementRoles: Vector<any> = new Vector<any>();

    private: const webManagementRoles: Vector<any> = new Vector<any>();

private constructor (){

            super();
        
    basicUserRoleFactory: BasicUserRoleFactory = BasicUserRoleFactory.getInstance()!;;
    
this.adminRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.storeAdminRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.storeAdminRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.CUSTOMERMANAGER);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.ADJUSTER);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.PRODUCTMANAGER);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.REVIEWER);
    
this.storeManagementRoles!.add(basicUserRoleFactory!.SHIPPING);
    
this.productManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.productManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.productManagementRoles!.add(basicUserRoleFactory!.PRODUCTMANAGER);
    
this.reviewManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.reviewManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.reviewManagementRoles!.add(basicUserRoleFactory!.REVIEWER);
    
this.customerManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.customerManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.customerManagementRoles!.add(basicUserRoleFactory!.CUSTOMERMANAGER);
    
this.workflowManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.workflowManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.workflowManagementRoles!.add(basicUserRoleFactory!.WORKFLOWEDITOR);
    
this.orderManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.orderManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.adjusterManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.adjusterManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.adjusterManagementRoles!.add(basicUserRoleFactory!.ADJUSTER);
    
this.shippingManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.shippingManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.shippingManagementRoles!.add(basicUserRoleFactory!.SHIPPING);
    
this.webManagementRoles!.add(basicUserRoleFactory!.ADMINISTRATOR);
    
this.webManagementRoles!.add(basicUserRoleFactory!.STOREMANAGER);
    
this.webManagementRoles!.add(basicUserRoleFactory!.WEBMANAGER);
    
this.webManagementRoles!.add(basicUserRoleFactory!.WORKFLOWEDITOR);
    
this.webManagementRoles!.add(basicUserRoleFactory!.VIEWEDITOR);
    
}


    public Vector<any> getProductManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.productManagementRoles;
    
}


    public Vector<any> getAdminRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminRoles;
    
}


    public Vector<any> getStoreAdminRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeAdminRoles;
    
}


    public Vector<any> getStoreManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeManagementRoles;
    
}


    public Vector<any> getReviewManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.reviewManagementRoles;
    
}


    public Vector<any> getCustomerManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customerManagementRoles;
    
}


    public Vector<any> getWorkflowManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.workflowManagementRoles;
    
}


    public Vector<any> getWebManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.webManagementRoles;
    
}


    public Vector<any> getShippingManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingManagementRoles;
    
}


    public Vector<any> getAdjusterManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adjusterManagementRoles;
    
}


    public Vector<any> getOrderManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.orderManagementRoles;
    
}


};

            

