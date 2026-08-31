
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    requestHashMap: HashMap<any, any>;

    private: fileName: string;

                //@Throws(ServletException.constructor, IOException.constructor)
            
    processRequest(HttpServletRequest request, HttpServletResponse response){

    isError: bool = false;;
    

    inputStream: InputStream = 
                null
            ;;
    

        try {
            BlisketServletUtil.getInstance()!.init(request);
    
this.requestHashMap= new MultipartRequestParams(request).toHashMap();
    

    filePath: string = this.requestHashMap!.get(FileUploadData.getInstance()!.UPLOAD_TO_FILE_PATH) as string;;
    

                        if(filePath == 
                                    null
                                )
                        
                                    {
                                    isError= true;
    
response.sendError(HttpServletResponse.SC_NOT_FOUND);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    authenticationHelper: AuthenticationHelper = new AuthenticationHelperFactory().getInstance(hashMap, request) as AuthenticationHelper;;
    

                        if(authenticationHelper!.isAuthenticated())
                        
                                    {
                                    
                        if(AuthenticationHelperUtil.getInstance()!.isAuthorized(authenticationHelper, filePath))
                        
                                    {
                                    this.saveFile(filePath);
    
response.setContentType("text/plain");
    
response.getOutputStream()!.write("OK!".getBytes());
    

                                    }
                                
                        else {
                            isError= true;
    
response.sendError(HttpServletResponse.SC_UNAUTHORIZED, "You are not Authorized");
    

                        }
                            

                                    }
                                
                        else {
                            isError= true;
    
response.sendError(HttpServletResponse.SC_UNAUTHORIZED, "Please Login");
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "processRequest()", e);
    

                                    }
                                
isError= true;
    
response.sendError(HttpServletResponse.SC_NOT_FOUND);
    
}

         finally {
            
                        if(!isError)
                        
                                    {
                                    StreamUtil.getInstance()!.close(response.getOutputStream());
    

                                    }
                                

                        if(!StreamUtil.getInstance()!.close(inputStream))
                        
                                    {
                                    
                                    }
                                

         }
        
}


                //@Throws(Exception.constructor)
            
    saveFile(string filePath){

    fileOutputStream: AbFileOutputStream = 
                null
            ;;
    

        try {
            
    fileItem: FileItem = this.requestHashMap!.get(FileUploadData.getInstance()!.FILE_DATA) as FileItem;;
    

                        if(fileItem != 
                                    null
                                 && fileItem!.getSize() > 1)
                        
                                    {
                                    this.fileName= HttpRequestUtil.getInstance()!.generateFileName(fileItem!.getName());
    

                        if(filePath!.endsWith("/") || filePath!.endsWith("\\"))
                        
                                    {
                                    filePath= filePath +this.fileName;
    

                                    }
                                

    file: AbFile = AbFile.createAbFile(URLGLOBALS.getWebappPath() +filePath)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Uploaded File: ");
    
stringBuffer!.append(this.fileName);
    
stringBuffer!.append(" New File: ");
    
stringBuffer!.append(file.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "saveFile()");
    

                                    }
                                
HttpFileUploadUtil.log(fileItem);
    

    byteArray: std::vector<int8_t> = fileItem!.get()!;;
    

                        if(file.isFile())
                        
                                    {
                                    file.delete();
    
file.createNewFile();
    

                                    }
                                
fileOutputStream= AbFileOutputStream.createFromAbFile(file);
    
fileOutputStream!.write(byteArray);
    

                                    }
                                

         finally {
            
                        if(fileOutputStream != 
                                    null
                                )
                        
                                    {
                                    fileOutputStream!.close();
    

                                    }
                                

         }
        
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    doGet(HttpServletRequest request, HttpServletResponse response){
this.processRequest(request, response);
    
}


                //@Throws(ServletException.constructor, IOException.constructor)
            
    doPost(HttpServletRequest request, HttpServletResponse response){
this.processRequest(request, response);
    
}


    public string getServletInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Upload Cloud Files";
    
}


};

            

