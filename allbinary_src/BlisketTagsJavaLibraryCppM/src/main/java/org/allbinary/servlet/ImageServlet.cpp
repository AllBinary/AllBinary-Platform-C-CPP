
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
        
            #include "../../../java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BlisketServletUtil.h"

class ImageServlet: public HttpServlet {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void processRequest(HttpServletRequest request, HttpServletResponse response){

    InputStream inputStream = 
                null
            ;;
    

        try {
            BlisketServletUtil::getInstance().init(request);
    

    std::string requestURI = request.getRequestURI();;
    

    AbFile file = AbFile::createAbFile(URLGLOBALS::getWebappPath() +requestURI);;
    
inputStream= CloudStreamUtil::getInstance().getFileLocal(file);
    

    ByteArrayOutputStream outputStream = ByteArrayOutputStream(8000);;
    

    std::vector<int8_t> byteArray = StreamUtil::getInstance().getByteArray(inputStream, outputStream, new Array(16384));;
    
response.setContentType("image/jpeg;charset=utf-8");
    
response.getOutputStream().write(byteArray);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "processRequest()", e);
    

                                    }
                                
}

         finally {
            StreamUtil::getInstance().close(response.getOutputStream());
    

                        if(!StreamUtil::getInstance().close(inputStream))
                        
                                    {
                                    response.sendError(HttpServletResponse::SC_NOT_FOUND);
    

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
                        return "Serves Up Image";
    
}


};

            

