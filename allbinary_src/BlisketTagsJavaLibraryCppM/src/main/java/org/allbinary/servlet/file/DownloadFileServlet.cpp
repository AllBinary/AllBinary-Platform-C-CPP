
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DownloadFileServlet: public HttpServlet {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string DOWNLOAD = "download";

    private: const int32_t DEFAULT_BUFFER_SIZE = 16384;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void processRequest(HttpServletRequest request, HttpServletResponse response){

    InputStream inputStream = 
                null
            ;;
    

        try {
            BlisketServletUtil::getInstance().init(request);
    

    std::string requestPath = request.getRequestURI();;
    

                        if(false)
                        
                                    {
                                    response.sendError(HttpServletResponse::SC_NOT_FOUND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t beginIndex = requestPath.indexOf(this->DOWNLOAD);;
    

    std::string filePath = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    filePath= requestPath.substring(beginIndex +DOWNLOAD.size());
    

                                    }
                                
                        else {
                            response.sendError(HttpServletResponse::SC_NOT_FOUND);
    

                        }
                            

    AbFile file = AbFile::createAbFile(URLGLOBALS::getWebappPath() +filePath);;
    

                        if(!file.exists())
                        
                                    {
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
                                    inputStream= CloudStreamUtil::getInstance().getFile(file);
    

    std::string contentType = getServletContext().getMimeType(file.getName());;
    

                        if(false)
                        
                                    {
                                    contentType= "application/octet-stream";
    

                                    }
                                
response.reset();
    
response.setBufferSize(this->DEFAULT_BUFFER_SIZE);
    
response.setContentType(contentType);
    
response.setHeader("Content-Length", length.slice(, ).join(''));
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("attachment; filename=\"");
    
stringBuffer.append(file.getName());
    
stringBuffer.append(CommonSeps::getInstance().QUOTE);
    
response.setHeader("Content-Disposition", stringBuffer.toString());
    
StreamUtil::getInstance().get(inputStream, response.getOutputStream(), std::vector<int8_t>(16348));
    

                                    }
                                
                        else {
                            response.sendError(HttpServletResponse::SC_UNAUTHORIZED, "You are not Authorized");
    

                        }
                            

                                    }
                                
                        else {
                            response.sendError(HttpServletResponse::SC_UNAUTHORIZED, "Please Login");
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "processRequest()", e);
    

                                    }
                                
response.sendError(HttpServletResponse::SC_NOT_FOUND);
    
}

         finally {
            StreamUtil::getInstance().close(response.getOutputStream());
    

                        if(!StreamUtil::getInstance().close(inputStream))
                        
                                    {
                                    
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
                        return "Serves Up Cloud Files";
    
}


};

            

