
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileItemStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpFileUploadUtil
            : public Object
         {

    private: static HttpFileUploadUtil instance() { return HttpFileUploadUtil(); }

    public: static HttpFileUploadUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpFileUploadUtil::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: static void log(FileItemStream fileItem){

    LogUtil logUtil = LogUtil::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
stringBuffer.append("FileItem Log:");
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Content Type:");
    
stringBuffer.append(fileItem.getContentType());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Field Name:");
    
stringBuffer.append(fileItem.getFieldName());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Name:");
    
stringBuffer.append(fileItem.getName());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Size:");
    
stringBuffer.append(" Not Calculated Yet");
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTP))
                        
                                    {
                                    logUtil.putF(stringBuffer.toString(), getInstance(), "log()");
    

                                    }
                                
}


    public: static void log(FileItem fileItem){

    LogUtil logUtil = LogUtil::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
stringBuffer.append("FileItem Log:");
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Content Type:");
    
stringBuffer.append(fileItem.getContentType());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Field Name:");
    
stringBuffer.append(fileItem.getFieldName());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Name:");
    
stringBuffer.append(fileItem.getName());
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append("Size:");
    
stringBuffer.appendlong(fileItem.getSize());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    logUtil.putF(stringBuffer.toString(), getInstance(), "log()");
    

                                    }
                                
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: HttpFileUploadUtil(){
}


                //@Throws(Exception.constructor)
            
    public: bool isValid(Object* anyType){

                        if(anyType != 
                                    nullptr
                                 && !(anyType instanceof String))
                        
                                    {
                                    
                        if(anyType instanceof FileItem)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                            throw Exception("Object Not Instance Of FileItem but is: " +ClassUtil::viewAll(anyType, CommonSeps::getInstance().NEW_LINE));
                    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

