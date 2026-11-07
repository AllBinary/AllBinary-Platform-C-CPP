
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
        



        #ifndef ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_CPP
        #define ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/servlet/file/DownloadFileServlet.h"
        

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

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/CloudStreamUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/servlet/BlisketServletUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DownloadFileServlet::DownloadFileServlet() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        
                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto DownloadFileServlet::processRequest(HttpServletRequest* request, HttpServletResponse* response) -> void{

    InputStream* inputStream = 
                nullptr
            ;;
    

        {
        
        auto finallyFunction_N66338 = [&]() {
            StreamUtil::getInstance()->close(response->getOutputStream());
    

                        if(!StreamUtil::getInstance()->close(inputStream))
                        
                                    {
                                    
                                    }
                                

        };
        
        struct FinallyGuard_N66338 { decltype(finallyFunction_N66338)& function; ~FinallyGuard_N66338() { function(); } } finallyGuard_N66338{finallyFunction_N66338};
        
        try {
            BlisketServletUtil::getInstance()->init(request);
    

    std::string requestPath = request->getRequestURI();;
    

                        if(false)
                        
                                    {
                                    response->sendError(HttpServletResponse::SC_NOT_FOUND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

    int32_t beginIndex = JavaString::indexOf(requestPath, this->DOWNLOAD);;
    

    std::string filePath = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    filePath= JavaString::substring(requestPath, beginIndex +this->DOWNLOAD.size());
    

                                    }
                                
                        else {
                            response->sendError(HttpServletResponse::SC_NOT_FOUND);
    

                        }
                            

    AbFile* file = AbFile::createAbFile(JavaString::valueOf(URLGLOBALS::getWebappPath()) +JavaString::valueOf(filePath));;
    

                        if(!file->exists())
                        
                                    {
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
                                    inputStream= CloudStreamUtil::getInstance()->getFile(file);
    

    std::string contentType = getServletContext()->getMimeType(file->getName());;
    

                        if(false)
                        
                                    {
                                    contentType= "application/octet-stream";
    

                                    }
                                
response->reset();
    
response->setBufferSize(this->DEFAULT_BUFFER_SIZE);
    
response->setContentType(contentType);
    
response->setHeader("Content-Length", length.slice(, ).join(''));
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("attachment; filename=\"");
    
stringBuffer->append(file->getName());
    
stringBuffer->append(CommonSeps::getInstance()->QUOTE);
    
response->setHeader("Content-Disposition", JavaString::valueOf(stringBuffer));
    
StreamUtil::getInstance()->get(inputStream, response->getOutputStream(), std::vector<int8_t>(16348));
    

                                    }
                                
                        else {
                            response->sendError(HttpServletResponse::SC_UNAUTHORIZED, "You are not Authorized");
    

                        }
                            

                                    }
                                
                        else {
                            response->sendError(HttpServletResponse::SC_UNAUTHORIZED, "Please Login");
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processRequest()", &e);
    

                                    }
                                
response->sendError(HttpServletResponse::SC_NOT_FOUND);
    
}

        }

}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto DownloadFileServlet::doGet(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto DownloadFileServlet::doPost(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


    auto DownloadFileServlet::getServletInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Serves Up Cloud Files";
    
}




        #endif //ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_CPP
