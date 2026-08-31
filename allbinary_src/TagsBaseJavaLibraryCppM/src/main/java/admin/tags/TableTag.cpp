
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
        



            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/SqlStrings.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/PropertiesTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TableTag: public PropertiesTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: enabled: string;

    private: tagHelperFactoryInterface: TagHelperFactoryInterface;

    private: tagRequestHelperFactoryInterface: TagHelperFactoryInterface;

    private: requestObject: any;

    private: current: Integer;

    private: total: Integer;

public constructor (){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


    public setIsSelected(string enabled){
this.enabled= enabled;
    
}


                //@Throws(Exception.constructor)
            
    public bool isEnabled(){

                        if(!StringValidationUtil.getInstance()!.isEmpty(this.enabled))
                        
                                    {
                                    
                        if(BooleanUtil.getInstance()!.getFromString(this.enabled) || this.enabled.compareTo("on") == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    setTagHelperFactory(TagHelperFactoryInterface tagHelperFactoryInterface){
this.tagHelperFactoryInterface= tagHelperFactoryInterface;
    
}


    TagHelperFactoryInterface getTagHelperFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tagHelperFactoryInterface;
    
}


    setTagRequestHelperFactory(TagHelperFactoryInterface tagHelperFactoryInterface){
this.tagRequestHelperFactoryInterface= tagHelperFactoryInterface;
    
}


    TagHelperFactoryInterface getTagRequestHelperFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tagRequestHelperFactoryInterface;
    
}


    public setCurrent(Integer current){
this.current= current;
    
}


    public Integer getCurrent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.current;
    
}


    public setTotal(Integer total){
this.total= total;
    
}


    public Integer getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.total;
    
}


                //@Throws(LicensingException.constructor)
            
    public string drop(){

        try {
            
    anyType: any = this.getTagHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    addressHelperClass: Function = anyType!.constructor!;;
    

    method: Method = addressHelperClass!.getMethod("drop", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to drop table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.DROP, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public string create(){

        try {
            
    anyType: any = this.getTagHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    addressHelperClass: Function = anyType!.constructor!;;
    

    method: Method = addressHelperClass!.getMethod("create", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to create table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "create()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public string restore(){

        try {
            
    anyType: any = this.getTagHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    addressHelperClass: Function = anyType!.constructor!;;
    

    method: Method = addressHelperClass!.getMethod("restore", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to restore backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "restore()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public string backup(){

        try {
            
    anyType: any = this.getTagHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    addressHelperClass: Function = anyType!.constructor!;;
    

    method: Method = addressHelperClass!.getMethod("backup", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to make backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backup()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public string insert(){

        try {
            
    helperClass: Function = this.requestObject!.constructor!;;
    

    method: Method = helperClass!.getMethod("insert", 
                            nullptr)!;;
    

    result: string = method.invoke(this.requestObject, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to insert";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "insert()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public string delete(){

        try {
            
    helperClass: Function = this.requestObject!.constructor!;;
    

    method: Method = helperClass!.getMethod(commonStrings!.delete, 
                            nullptr)!;;
    

    result: string = method.invoke(this.requestObject, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to delete";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "delete()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public string update(){

        try {
            
    helperClass: Function = this.requestObject!.constructor!;;
    

    method: Method = helperClass!.getMethod("update", 
                            nullptr)!;;
    

    result: string = method.invoke(this.requestObject, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to update";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    
    request: HttpServletRequest = this.pageContext!.getRequest() as HttpServletRequest;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TableTag Helper: ");
    
stringBuffer!.append(this.getTagHelperFactoryInterface()!.constructor.name.toString()!);
    
stringBuffer!.append(" Request URI: ");
    
stringBuffer!.append(request.getRequestURI());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.tagStrings!.DO_START_TAG);
    

                                    }
                                

                        if(this.getTagRequestHelperFactoryInterface() != 
                                    null
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    this.logUtil!.putF("TableTag RequestHelper: " +this.getTagRequestHelperFactoryInterface()!.constructor.name.toString()!, this, this.tagStrings!.DO_START_TAG);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    this.logUtil!.putF("TableTag RequestHelper: null", this, this.tagStrings!.DO_START_TAG);
    

                                    }
                                

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    this.logUtil!.putF("TableTag this.getCommand(): " +this.getCommand(), this, tagStrings!.DO_START_TAG);
    

                                    }
                                

                        if(this.isEnabled())
                        
                                    {
                                    
                        if(this.getCommand() != 
                                    null
                                )
                        
                                    {
                                    
                        if(this.getCommand()!.compareTo(this.commonStrings!.INSERT) == 0 || this.getCommand()!.compareTo(SqlStrings.getInstance()!.INSERT_INTO) == 0 || this.getCommand()!.compareTo(commonStrings!.DELETE) == 0 || this.getCommand()!.compareTo(commonStrings!.UPDATE) == 0 || this.getCommand()!.compareTo(SqlStrings.getInstance()!.UPDATE) == 0)
                        
                                    {
                                    this.requestObject= this.getTagRequestHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext);
    

                                    }
                                

                        if(this.getCommand()!.compareTo(this.commonStrings!.INSERT) == 0 || this.getCommand()!.compareTo(SqlStrings.getInstance()!.INSERT_INTO) == 0)
                        
                                    {
                                    this.insert();
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.DELETE) == 0)
                        
                                    {
                                    this.delete();
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.UPDATE) == 0 || this.getCommand()!.compareTo(SqlStrings.getInstance()!.UPDATE) == 0)
                        
                                    {
                                    this.update();
    

                                    }
                                

                        if(this.getCommand()!.compareTo(org.allbinary.globals.GLOBALS2.BACKUP) == 0)
                        
                                    {
                                    
    output: string = this.backup()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(org.allbinary.globals.GLOBALS2.RESTORE) == 0)
                        
                                    {
                                    this.getPropertiesHashMap()!.put("current", this.getCurrent());
    
this.getPropertiesHashMap()!.put("total", this.getTotal());
    

    output: string = this.restore()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.DROP) == 0)
                        
                                    {
                                    
    output: string = this.drop()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.CREATE) == 0)
                        
                                    {
                                    
    output: string = this.create()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.INSERT) == 0)
                        
                                    {
                                    
    output: string = this.insert()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.DELETE) == 0)
                        
                                    {
                                    
    output: string = this.delete()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(commonStrings!.UPDATE) == 0)
                        
                                    {
                                    
    output: string = this.update()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this.pageContext!.getOut()!.print(output +"<br />");
    

                                    }
                                

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                //: 
} catch(e) 
            {
AbResponseHandler.sendJspTagLicensingRedirect(this.pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler.sendJspTagRedirect(this.pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}
*/
}


};

            

