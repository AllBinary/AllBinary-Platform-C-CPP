
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitializerData
            : public Object
         {
        

    private: static const instance: InitializerData = new InitializerData();

    public static InitializerData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitializerData.instance;
    
}


    public const DBUSER: string = "DBUSER";

    public const DBPASSWORD: string = "DBPASSWORD";

    public const ADMINJDBCDRIVER: string = "ADMIN_JDBCDRIVER";

    public const ADMINSCHEMA: string = "ADMINSCHEMA";

    public const ADMINSERVER: string = "ADMINSERVER";

    public const ADMINPORT: string = "ADMINPORT";

    public const CUSTOMERJDBCDRIVER: string = "CUSTOMER_JDBCDRIVER";

    public const CUSTOMERNAME: string = "CUSTOMERNAME";

    public const CUSTOMERUSERNAME: string = "CUSTOMERUSERNAME";

    public const CUSTOMERPASSWORD: string = "CUSTOMERPASSWORD";

    public const CUSTOMERSCHEMA: string = "CUSTOMERSCHEMA";

    public const CUSTOMERSERVER: string = "CUSTOMERSERVER";

    public const CUSTOMERPORT: string = "CUSTOMERPORT";

    public const HISTORYJDBCDRIVER: string = "HISTORY_JDBCDRIVER";

    public const HISTORYNAME: string = "HISTORYNAME";

    public const HISTORYUSERNAME: string = "HISTORYUSERNAME";

    public const HISTORYPASSWORD: string = "HISTORYPASSWORD";

    public const HISTORYSCHEMA: string = "HISTORYSCHEMA";

    public const HISTORYSERVER: string = "HISTORYSERVER";

    public const HISTORYPORT: string = "HISTORYPORT";

    public const LOGJDBCDRIVER: string = "LOG_JDBCDRIVER";

    public const LOGNAME: string = "LOGNAME";

    public const LOGUSERNAME: string = "LOGUSERNAME";

    public const LOGPASSWORD: string = "LOGPASSWORD";

    public const LOGSCHEMA: string = "LOGSCHEMA";

    public const LOGSERVER: string = "LOGSERVER";

    public const LOGPORT: string = "LOGPORT";

    public const INVENTORYJDBCDRIVER: string = "INVENTORY_JDBCDRIVER";

    public const INVENTORYNAME: string = "INVENTORYNAME";

    public const INVENTORYUSERNAME: string = "INVENTORYUSERNAME";

    public const INVENTORYPASSWORD: string = "INVENTORYPASSWORD";

    public const INVENTORYSCHEMA: string = "INVENTORYSCHEMA";

    public const INVENTORYSERVER: string = "INVENTORYSERVER";

    public const INVENTORYPORT: string = "INVENTORYPORT";

    public const STATICPAGESJDBCDRIVER: string = "STATICPAGES_JDBCDRIVER";

    public const STATICPAGESNAME: string = "STATICPAGESNAME";

    public const STATICPAGESUSERNAME: string = "STATICPAGESUSERNAME";

    public const STATICPAGESPASSWORD: string = "STATICPAGESPASSWORD";

    public const STATICPAGESSCHEMA: string = "STATICPAGESSCHEMA";

    public const STATICPAGESSERVER: string = "STATICPAGESSERVER";

    public const STATICPAGESPORT: string = "STATICPAGESPORT";

    public string getJdbcDriverSolutionInfo(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("The following describes the possible problems and solutions regarding the Jdbc Driver error(s):<p/>");
    
stringBuffer!.append("1. A JDBC driver you specified is not in your classpath.<br/>");
    
stringBuffer!.append("Solution 1: Move the JDBC driver into any directory specified in the existing classpath. <br/>");
    
stringBuffer!.append("Solution 2: Add the directory that contains the JDBC driver to the classpath.<br/>");
    
stringBuffer!.append("Solution 3: Add the JDBC driver to the WEB-INF/lib directory where you installed this webapp.<br/>");
    
stringBuffer!.append("2. The JDBC driver you specified does not exit.<br/>");
    
stringBuffer!.append("Solution: Get a JDBC driver. <br/>");
    
stringBuffer!.append("3. The JDBC driver you specified is not valid.<br/>");
    
stringBuffer!.append("Solution: Use a valid JDBC driver.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

