
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGETYPES_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGETYPES_H

            #include <vector>
        
            #include "../../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageActionScriptOutputData.h"

class ImageTypes
            : public Object
         {

    public: static ImageTypes valueOf(std::vector<Object*> anyType);

    private: Vector vector = Vector();

public: ImageTypes();

public: ImageTypes(Node node);

    public: Vector getVector();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGETYPES_H
