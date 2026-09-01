
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoInterface.h"
#include "TransformInfoData.h"
#include "TransformInfo.h"

class TransformInfoDomNode
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: TransformInfoInterface transformInfoInterface;

    private: std::string mappedName;

public: TransformInfoDomNode(Node node);

public: TransformInfoDomNode(TransformInfoInterface transformInfoInterface);

public: TransformInfoDomNode(TransformInfoInterface transformInfoInterface, std::string mappedName);

public: TransformInfoDomNode(std::string name, std::string mappedName);

    public: TransformInfoInterface getTransformInfoInterface();

    public: std::string getMappedName();

    public: std::string getReplaceKey();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_H
