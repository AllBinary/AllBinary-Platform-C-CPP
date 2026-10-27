
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_USERDOMNODE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_USERDOMNODE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/UserDomNode.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/UserData.h"


UserDomNode::UserDomNode(TableMappingInterface* dataMappingInterface){
this->dataMappingInterface= dataMappingInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto UserDomNode::toXmlNode(Document* document) -> Node*{

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

    HashMap<Object*, Object*>* hashMap = this->dataMappingInterface->toHashMap();;
    
hashMap->put(EntryData::getInstance()->LASTMODIFIED, EMPTY_STRING);
    
hashMap->put(EntryData::getInstance()->ENCRYPTION, EMPTY_STRING);
    
hashMap->put(UserData::PASSWORD, EMPTY_STRING);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, UserData::NAME, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto UserDomNode::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto UserDomNode::view() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_USERDOMNODE_CPP
