
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
        



        #ifndef ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_CPP
        #define ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/servlet/file/UploadFileServlet.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UploadFileServlet::UploadFileServlet() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        
                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto UploadFileServlet::processRequest(HttpServletRequest* request, HttpServletResponse* response) -> void{

    bool isError = false;;
    

    InputStream* inputStream = 
                nullptr
            ;;
    

        {
        
        auto finallyFunction_N66502 = [&]() {
            
                        if(!isError)
                        
                                    {
                                    StreamUtil::getInstance()->close(response->getOutputStream());
    

                                    }
                                

                        if(!StreamUtil::getInstance()->close(inputStream))
                        
                                    {
                                    
                                    }
                                

        };
        
        struct FinallyGuard_N66502 { decltype(finallyFunction_N66502)& function; ~FinallyGuard_N66502() { function(); } } finallyGuard_N66502{finallyFunction_N66502};
        
        try {
            BlisketServletUtil::getInstance()->init(request);
    
this->requestHashMap= (new MultipartRequestParams(request))->toHashMap();
    

    std::string filePath = JavaBoxes::unbox<std::string>(this->requestHashMap->get(FileUploadData::getInstance()->UPLOAD_TO_FILE_PATH));;
    

                        if(false)
                        
                                    {
                                    isError= true;
    
response->sendError(HttpServletResponse::SC_NOT_FOUND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    AuthenticationHelper* authenticationHelper = dynamic_cast<AuthenticationHelper*>((new AuthenticationHelperFactory())->getInstance(hashMap, request));;
    

                        if(authenticationHelper->isAuthenticated())
                        
                                    {
                                    
                        if(AuthenticationHelperUtil::getInstance()->isAuthorized(authenticationHelper, filePath))
                        
                                    {
                                    this->saveFile(filePath);
    
response->setContentType("text/plain");
    
response->getOutputStream()->write("OK!".getBytes());
    

                                    }
                                
                        else {
                            isError= true;
    
response->sendError(HttpServletResponse::SC_UNAUTHORIZED, "You are not Authorized");
    

                        }
                            

                                    }
                                
                        else {
                            isError= true;
    
response->sendError(HttpServletResponse::SC_UNAUTHORIZED, "Please Login");
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processRequest()", &e);
    

                                    }
                                
isError= true;
    
response->sendError(HttpServletResponse::SC_NOT_FOUND);
    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto UploadFileServlet::saveFile(std::string filePath) -> void{

    AbFileOutputStream* fileOutputStream = 
                nullptr
            ;;
    

        {
        
        auto finallyFunction_N67807 = [&]() {
            
                        if(fileOutputStream != 
                                    nullptr
                                )
                        
                                    {
                                    fileOutputStream->close();
    

                                    }
                                

        };
        
        struct FinallyGuard_N67807 { decltype(finallyFunction_N67807)& function; ~FinallyGuard_N67807() { function(); } } finallyGuard_N67807{finallyFunction_N67807};
        
        {
            
    FileItem* fileItem = dynamic_cast<FileItem*>(this->requestHashMap->get(FileUploadData::getInstance()->FILE_DATA));;
    

                        if(fileItem != 
                                    nullptr
                                 && fileItem->getSize() > 1)
                        
                                    {
                                    this->fileName= HttpRequestUtil::getInstance()->generateFileName(fileItem->getName());
    

                        if(JavaString::endsWith(filePath, "/") || JavaString::endsWith(filePath, "\\"))
                        
                                    {
                                    filePath= JavaString::valueOf(filePath) +JavaString::valueOf(this->fileName);
    

                                    }
                                

    AbFile* file = AbFile::createAbFile(JavaString::valueOf(URLGLOBALS::getWebappPath()) +JavaString::valueOf(filePath));;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->HTTPREQUEST))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Uploaded File: ");
    
stringBuffer->append(this->fileName);
    
stringBuffer->append(" New File: ");
    
stringBuffer->append(file->getPath());
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "saveFile()");
    

                                    }
                                
HttpFileUploadUtil::log(fileItem);
    

    std::vector<int8_t> byteArray = fileItem->get();;
    

                        if(file->isFile())
                        
                                    {
                                    file->delete_();
    
file->createNewFile();
    

                                    }
                                
fileOutputStream= AbFileOutputStream::createFromAbFile(file);
    
fileOutputStream->write(byteArray);
    

                                    }
                                

        }

        }

}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto UploadFileServlet::doGet(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto UploadFileServlet::doPost(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


    auto UploadFileServlet::getServletInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Upload Cloud Files";
    
}




        #endif //ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_CPP
