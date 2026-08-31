
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
        



        #ifndef SERVLET_REQUEST_REQUESTHANDLER_H
        #define SERVLET_REQUEST_REQUESTHANDLER_H

            #include "../../java/lang/Exception.h"
        
#include <java/io.h>

      
#include <java/net.h>

      
#include <javax/servlet.h>

      
#include <javax/servlet/http.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>

      
#include <org/allbinary/logic/control/workflow/RequestWorkFlowFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HttpServlet.h"
#include "ServletConfig.h"
#include "PrintWriter.h"
#include "ServletRequest.h"
#include "ServletResponse.h"
#include "HttpServletRequest.h"
#include "HttpServletResponse.h"

class RequestHandler: public HttpServlet {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(ServletException.constructor)
            
    public init(ServletConfig config);

    public destroy();

                //@Throws(ServletException.constructor, IOException.constructor)
            
    processRequest(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    doGet(HttpServletRequest request, HttpServletResponse response);

                //@Throws(ServletException.constructor, IOException.constructor)
            
    doPost(HttpServletRequest request, HttpServletResponse response);

    public string getServletInfo();

};

            


        #endif //SERVLET_REQUEST_REQUESTHANDLER_H
