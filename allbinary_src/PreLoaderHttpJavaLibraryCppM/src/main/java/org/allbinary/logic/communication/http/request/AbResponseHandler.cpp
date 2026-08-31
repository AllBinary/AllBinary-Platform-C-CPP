
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/servlet/RequestDispatcher.h>

      
#include <javax/servlet/ServletException.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/http/HttpServletResponse.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbResponseHandler
            : public Object
         {
        

                //@Throws(JspTagException.constructor)
            
    public static sendJspTagRedirect(PageContext pageContext, Exception e){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.JSPTAGERROR))
                        
                                    {
                                    logUtil!.put("Jsp Tag Exception", "AbResponseHandler", "sendJspRedirect()", e);
    

                                    }
                                
AbResponseHandler.sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS.getInstance()!.ERRORPAGE);
    

                //: 
} catch(e2) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.LICENSINGERROR))
                        
                                    {
                                    logUtil!.put("Exception in Redirect Handling", "AbResponseHandler", "sendJspRedirect", e);
    

                                    }
                                



                            throw new JspTagException();
                    
}

}


                //@Throws(ServletException.constructor)
            
    public static sendServletRedirect(PageContext pageContext, Exception e){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.JSPTAGERROR))
                        
                                    {
                                    logUtil!.put("Jsp Tag Exception", "AbResponseHandler", "sendJspRedirect()", e);
    

                                    }
                                
AbResponseHandler.sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS.getInstance()!.ERRORPAGE);
    

                //: 
} catch(e2) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.LICENSINGERROR))
                        
                                    {
                                    logUtil!.put("Exception in Redirect Handling", "AbResponseHandler", "sendJspRedirect", e);
    

                                    }
                                



                            throw new ServletException();
                    
}

}


                //@Throws(JspTagException.constructor)
            
    public static sendJspTagLicensingRedirect(PageContext pageContext, Exception e){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.JSPTAGERROR))
                        
                                    {
                                    logUtil!.put("Licensing Exception", "AbResponseHandler", "sendJspTagLicensingRedirect()", e);
    

                                    }
                                
AbResponseHandler.sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS.getInstance()!.LICENSEERRORPAGE);
    

                //: 
} catch(e2) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.LICENSINGERROR))
                        
                                    {
                                    logUtil!.put("Exception in Redirect Handling", "AbResponseHandler", "sendJspTagLicensingRedirect", e);
    

                                    }
                                



                            throw new JspTagException();
                    
}

}


                //@Throws(ServletException.constructor)
            
    public static sendServletLicensingRedirect(PageContext pageContext, Exception e){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.JSPTAGERROR))
                        
                                    {
                                    logUtil!.put("Licensing Exception", "AbResponseHandler", "sendServletLicensingRedirect()", e);
    

                                    }
                                
AbResponseHandler.sendRedirect(pageContext, FREEBLISKET_PATH_GLOBALS.getInstance()!.LICENSEERRORPAGE);
    

                //: 
} catch(e2) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.LICENSINGERROR))
                        
                                    {
                                    logUtil!.put("Exception in Redirect Handling", "AbResponseHandler", "sendServletLicensingRedirect", e);
    

                                    }
                                



                            throw new ServletException();
                    
}

}


                //@Throws(Exception.constructor)
            
    public static sendRedirect(PageContext pageContext, string page){

    request: HttpServletRequest = pageContext!.getRequest() as HttpServletRequest;;
    

    response: HttpServletResponse = pageContext!.getResponse() as HttpServletResponse;;
    

    requestDispatcher: RequestDispatcher = request.getRequestDispatcher(page)!;;
    

                        if(response.isCommitted())
                        
                                    {
                                    response.sendRedirect(page);
    

                                    }
                                
                        else {
                            
        try {
            requestDispatcher!.forward(request, response);
    

                //: 
} catch(e) 
            {
pageContext!.getOut()!.print("Error: " +page);
    
}


                        }
                            
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


};

            

