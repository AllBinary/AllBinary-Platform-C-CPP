
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
        



        #ifndef ORG_ALLBINARY_SERVLET_IMAGESERVLET_H
        #define ORG_ALLBINARY_SERVLET_IMAGESERVLET_H

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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    processRequest(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    doGet(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    doPost(HttpServletRequest request, HttpServletResponse response);

    public string getServletInfo();

};

            


        #endif //ORG_ALLBINARY_SERVLET_IMAGESERVLET_H
