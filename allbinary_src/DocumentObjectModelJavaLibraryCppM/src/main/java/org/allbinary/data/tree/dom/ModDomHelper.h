
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_MODDOMHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_MODDOMHELPER_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DomData.h"

class ModDomHelper
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static Node createTextNode(Document document, std::string name, std::string text);

                //@Throws(Exception.constructor)
            
    public: static Node createValueNode(Document document, std::string text);

                //@Throws(Exception.constructor)
            
    public: static Node createNameNode(Document document, std::string text);

                //@Throws(Exception.constructor)
            
    public: static Node createIndexNode(Document document, int32_t index);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string elementName, std::string nameText, std::string valueText);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string elementNameAndNameText, std::string valueText);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueIndexNodes(Document document, std::string elementNameAndNameText, int32_t index, std::string valueText);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string rootNode, HashMap<Object*, Object*> hashMap);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, Node node, HashMap<Object*, Object*> hashMap);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string rootNodeName, std::string duplicateNodeName, BasicArrayList valueVector);

                //@Throws(Exception.constructor)
            
    public: static Node createNameValueIndexNodes(Document document, std::string rootNodeName, std::string duplicateNodeName, BasicArrayList valueVector);

                //@Throws(Exception.constructor)
            
    public: static Node createNodeWithValueNodes(Document document, std::string rootNode, HashMap<Object*, Object*> hashMap);

                //@Throws(Exception.constructor)
            
    public: static Node createNodeWithValueNodes(Document document, Node node, HashMap<Object*, Object*> hashMap);

private: ModDomHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_MODDOMHELPER_H
