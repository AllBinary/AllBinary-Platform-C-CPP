
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/ServletException.h>

      
#include <javax/servlet/http/HttpServlet.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpServletResponse.h>

      
#include <admin/taghelpers/AuthenticationHelper.h>

      
#include <admin/taghelpers/AuthenticationHelperFactory.h>

      
#include <admin/taghelpers/AuthenticationHelperUtil.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/file/upload/FileUploadData.h>

      
#include <org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h>

      
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>

      
#include <org/allbinary/logic/communication/http/request/MultipartRequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/servlet/BlisketServletUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UploadFileServlet: public HttpServlet {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: HashMap<Object*, Object*> requestHashMap;

    private: std::string fileName;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void processRequest(HttpServletRequest request, HttpServletResponse response){

    bool isError = false;;
    

    InputStream inputStream = 
                null
            ;;
    

        try {
            BlisketServletUtil::getInstance().init(request);
    
this->requestHashMap= MultipartRequestParams(request).toHashMap();
    

    std::string filePath = this->requestHashMap.get(FileUploadData::getInstance().UPLOAD_TO_FILE_PATH);;
    

                        if(false)
                        
                                    {
                                    isError= true;
    
response.sendError(HttpServletResponse::SC_NOT_FOUND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    

    AuthenticationHelper authenticationHelper = AuthenticationHelperFactory().getInstance(hashMap, request);;
    

                        if(authenticationHelper.isAuthenticated())
                        
                                    {
                                    
                        if(AuthenticationHelperUtil::getInstance().isAuthorized(authenticationHelper, filePath))
                        
                                    {
                                    this->saveFile(filePath);
    
response.setContentType("text/plain");
    
response.getOutputStream().write("OK!".getBytes());
    

                                    }
                                
                        else {
                            isError= true;
    
response.sendError(HttpServletResponse::SC_UNAUTHORIZED, "You are not Authorized");
    

                        }
                            

                                    }
                                
                        else {
                            isError= true;
    
response.sendError(HttpServletResponse::SC_UNAUTHORIZED, "Please Login");
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "processRequest()", e);
    

                                    }
                                
isError= true;
    
response.sendError(HttpServletResponse::SC_NOT_FOUND);
    
}

         finally {
            
                        if(!isError)
                        
                                    {
                                    StreamUtil::getInstance().close(response.getOutputStream());
    

                                    }
                                

                        if(!StreamUtil::getInstance().close(inputStream))
                        
                                    {
                                    
                                    }
                                

         }
        
}


                //@Throws(Exception.constructor)
            
    private: void saveFile(std::string filePath){

    AbFileOutputStream fileOutputStream = 
                null
            ;;
    

        try {
            
    FileItem fileItem = this->requestHashMap.get(FileUploadData::getInstance().FILE_DATA);;
    

                        if(fileItem != 
                                    nullptr
                                 && fileItem.getSize() > 1)
                        
                                    {
                                    this->fileName= HttpRequestUtil::getInstance().generateFileName(fileItem.getName());
    

                        if(filePath.endsWith("/") || filePath.endsWith("\\"))
                        
                                    {
                                    filePath= filePath +this->fileName;
    

                                    }
                                

    AbFile file = AbFile::createAbFile(URLGLOBALS::getWebappPath() +filePath);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Uploaded File: ");
    
stringBuffer.append(this->fileName);
    
stringBuffer.append(" New File: ");
    
stringBuffer.append(file.getPath());
    
this->logUtil.putF(stringBuffer.toString(), this, "saveFile()");
    

                                    }
                                
HttpFileUploadUtil::log(fileItem);
    

    std::vector<int8_t> byteArray = fileItem.get();;
    

                        if(file.isFile())
                        
                                    {
                                    file.delete();
    
file.createNewFile();
    

                                    }
                                
fileOutputStream= AbFileOutputStream::createFromAbFile(file);
    
fileOutputStream.write(byteArray);
    

                                    }
                                

         finally {
            
                        if(fileOutputStream != 
                                    nullptr
                                )
                        
                                    {
                                    fileOutputStream.close();
    

                                    }
                                

         }
        
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doGet(HttpServletRequest request, HttpServletResponse response){
this->processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doPost(HttpServletRequest request, HttpServletResponse response){
this->processRequest(request, response);
    
}


    public: std::string getServletInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Upload Cloud Files";
    
}


};

            

