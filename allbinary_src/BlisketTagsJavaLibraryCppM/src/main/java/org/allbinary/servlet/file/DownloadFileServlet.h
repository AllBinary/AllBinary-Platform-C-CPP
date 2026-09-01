
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
        



        #ifndef ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H
        #define ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H

            #include "../../../../java/lang/Exception.h"
        
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
            
    protected: void processRequest(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doGet(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doPost(HttpServletRequest request, HttpServletResponse response);

    public: std::string getServletInfo();

};

            


        #endif //ORG_ALLBINARY_SERVLET_FILE_DOWNLOADFILESERVLET_H
