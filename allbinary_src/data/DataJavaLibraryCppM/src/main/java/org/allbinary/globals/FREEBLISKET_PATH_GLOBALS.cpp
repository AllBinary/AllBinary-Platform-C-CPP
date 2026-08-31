
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FREEBLISKET_PATH_GLOBALS
            : public Object
         {
        

    private: static const instance: FREEBLISKET_PATH_GLOBALS = new FREEBLISKET_PATH_GLOBALS();

    public static FREEBLISKET_PATH_GLOBALS getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FREEBLISKET_PATH_GLOBALS.instance;
    
}


    public const INSTALLPATH: string;

    public const XSLPATH: string;

    public const TEMPLATEPATH: string = "template" +AbPathData.getInstance()!.SEPARATOR;

    public const STYLEPATH: string = this.TEMPLATEPATH +"style" +AbPathData.getInstance()!.SEPARATOR;

    public const THEMEPATH: string = this.STYLEPATH +"theme" +AbPathData.getInstance()!.SEPARATOR;

    public const DBINITPATH: string = PATH_GLOBALS.getInstance()!.INIT_PATH +"db" +AbPathData.getInstance()!.SEPARATOR;

    public const LINEDATAPATH: string = PATH_GLOBALS.getInstance()!.INIT_PATH +"lineData" +AbPathData.getInstance()!.SEPARATOR;

    public const CONFIGURATIONPATH: string;

    public const USERCONFIGURATIONPATH: string;

    public const CONTEXTCONFIGURATIONPATH: string;

    public const LICENSEERRORPAGE: string = "LicensingError.jsp";

    public const ERRORPAGE: string = "Error.jsp";

private constructor (){

            super();
        
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("install");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
this.INSTALLPATH= stringBuffer!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.INIT_PATH);
    
stringBuffer!.append("views");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
this.XSLPATH= stringBuffer!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.XSLPATH);
    
stringBuffer!.append("configuration");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
this.CONFIGURATIONPATH= stringBuffer!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.CONFIGURATIONPATH);
    
stringBuffer!.append("user");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
this.USERCONFIGURATIONPATH= stringBuffer!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.CONFIGURATIONPATH);
    
stringBuffer!.append("context");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
this.CONTEXTCONFIGURATIONPATH= stringBuffer!.toString();
    
stringBuffer!.delete(0, stringBuffer!.length());
    
}


};

            

