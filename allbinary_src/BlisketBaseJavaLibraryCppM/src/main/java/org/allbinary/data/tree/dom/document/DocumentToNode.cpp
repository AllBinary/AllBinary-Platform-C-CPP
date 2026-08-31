
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
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DocumentToNode
            : public Object
         {
        

    private: static const XMLROOT: string = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";

    private: static const XMLROOTSTART: string = "<?xml";

    private: static const XMLROOTEND: string = "?>";

    private: static const XMLJSPROOTSTART: string = "<jsp:root";

    private: static const XMLEND: string = ">";

    private: static const XMLJSPROOTENDSTART: string = "</jsp:root";

                //@Throws(Exception.constructor)
            
    public static string convertDocumentToNodeString(string documentString){
documentString= DocumentToNode.remove(documentString, DocumentToNode.XMLJSPROOTSTART, DocumentToNode.XMLEND);
    
documentString= DocumentToNode.remove(documentString, DocumentToNode.XMLJSPROOTENDSTART, DocumentToNode.XMLEND);
    

    replaceXmlRoot: Replace = new Replace(XMLROOT, StringUtil.getInstance()!.EMPTY_STRING);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replaceXmlRoot!.all(documentString);;
    
}


    public static string removeXmlDefinitionFromDocumentString(string documentString){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DocumentToNode.remove(documentString, XMLROOTSTART, XMLROOTEND);;
    
}


    public static string remove(string documentString, string start, string end){

    startIndex: int32_t= 0;;
    

        while((startIndex= documentString!.indexOf(start)) !=  -1)
        {

                        if(startIndex >= 0)
                        
                                    {
                                    
    endIndex: int32_t = documentString!.indexOf(end, startIndex)!;;
    

                        if(endIndex >= 0)
                        
                                    {
                                    
    startString: string = documentString!.substring(0, startIndex)!;;
    

    resultString: string = documentString!.substring(endIndex +1)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return startString +resultString;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return documentString;
    
}


private constructor (){

            super();
        }


};

            

