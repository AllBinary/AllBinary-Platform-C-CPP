
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
        



        #ifndef ORG_ALLBINARY_SERVLET_IMAGESERVLET_CPP
        #define ORG_ALLBINARY_SERVLET_IMAGESERVLET_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/servlet/ImageServlet.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <javax/servlet/ServletException.h>

      
#include <javax/servlet/http/HttpServlet.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpServletResponse.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/CloudStreamUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/servlet/BlisketServletUtil.h"


ImageServlet::ImageServlet() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        
                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto ImageServlet::processRequest(HttpServletRequest* request, HttpServletResponse* response) -> void{

    InputStream* inputStream = 
                null
            ;;
    

        {
        
        auto finallyFunction_N66066 = [&]() {
            StreamUtil::getInstance()->close(response->getOutputStream());
    

                        if(!StreamUtil::getInstance()->close(inputStream))
                        
                                    {
                                    response->sendError(HttpServletResponse::SC_NOT_FOUND);
    

                                    }
                                

        };
        
        struct FinallyGuard_N66066 { decltype(finallyFunction_N66066)& function; ~FinallyGuard_N66066() { function(); } } finallyGuard_N66066{finallyFunction_N66066};
        
        try {
            BlisketServletUtil::getInstance()->init(request);
    

    std::string requestURI = request->getRequestURI();;
    

    AbFile* file = AbFile::createAbFile(JavaString::valueOf(URLGLOBALS::getWebappPath()) +JavaString::valueOf(requestURI));;
    
inputStream= CloudStreamUtil::getInstance()->getFileLocal(file);
    

    ByteArrayOutputStream* outputStream = new ByteArrayOutputStream(8000);;
    

    std::vector<int8_t> byteArray = StreamUtil::getInstance()->getByteArray(inputStream, outputStream, std::vector<int8_t>(16384));;
    
response->setContentType("image/jpeg;charset=utf-8");
    
response->getOutputStream()->write(byteArray);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "processRequest()", &e);
    

                                    }
                                
}

        }

}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto ImageServlet::doGet(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    auto ImageServlet::doPost(HttpServletRequest* request, HttpServletResponse* response) -> void{
this->processRequest(request, response);
    
}


    auto ImageServlet::getServletInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Serves Up Image";
    
}




        #endif //ORG_ALLBINARY_SERVLET_IMAGESERVLET_CPP
