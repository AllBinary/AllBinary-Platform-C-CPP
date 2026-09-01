
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
        



        #ifndef ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H
        #define ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H

            #include <vector>
        
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

    protected: HashMap<any, any> requestHashMap;

    private: std::string fileName;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void processRequest(HttpServletRequest request, HttpServletResponse response);

                //@Throws(Exception.constructor)
            
    private: void saveFile(std::string filePath);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doGet(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    protected: void doPost(HttpServletRequest request, HttpServletResponse response);

    public: std::string getServletInfo();

};

            


        #endif //ORG_ALLBINARY_SERVLET_FILE_UPLOADFILESERVLET_H
