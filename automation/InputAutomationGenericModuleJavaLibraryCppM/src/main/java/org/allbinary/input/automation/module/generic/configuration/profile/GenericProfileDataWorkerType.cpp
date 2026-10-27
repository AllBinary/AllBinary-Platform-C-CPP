
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerTypeInterface.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h"

HashMap<Object*, Object*>* GenericProfileDataWorkerType::hashMap = StdUtil::getInstance()->createHashMap();
GenericProfileDataWorkerType* GenericProfileDataWorkerType::SAVED_CAPTURE = SavedCaptureGenericProfileDataWorkerType::SAVED_CAPTURE;
auto GenericProfileDataWorkerType::SCREEN_CAPTURE_owner() -> GenericProfileDataWorkerType* { static std::unique_ptr<GenericProfileDataWorkerType> value(new GenericProfileDataWorkerType(JavaString::valueOf("Screen ") +JavaString::valueOf(InputImageType::CAPTURE->getName()))); return value.get(); }
GenericProfileDataWorkerType* GenericProfileDataWorkerType::SCREEN_CAPTURE = GenericProfileDataWorkerType::SCREEN_CAPTURE_owner();
auto GenericProfileDataWorkerType::COMPARISON_owner() -> GenericProfileDataWorkerType* { static std::unique_ptr<GenericProfileDataWorkerType> value(new GenericProfileDataWorkerType(InputImageType::COMPARISON->getName())); return value.get(); }
GenericProfileDataWorkerType* GenericProfileDataWorkerType::COMPARISON = GenericProfileDataWorkerType::COMPARISON_owner();
auto GenericProfileDataWorkerType::MOTION_owner() -> GenericProfileDataWorkerType* { static std::unique_ptr<GenericProfileDataWorkerType> value(new GenericProfileDataWorkerType(InputImageType::MOTION->getName())); return value.get(); }
GenericProfileDataWorkerType* GenericProfileDataWorkerType::MOTION = GenericProfileDataWorkerType::MOTION_owner();

GenericProfileDataWorkerType::GenericProfileDataWorkerType(std::string name){
this->setName(name);
    
GenericProfileDataWorkerType::hashMap->put(this->getName(), this);
    
}


    auto GenericProfileDataWorkerType::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto GenericProfileDataWorkerType::setName(std::string name) -> void{
this->name= name;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfileDataWorkerType::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createTextNode(document, GenericProfileDataWorkerData::NAME, this->name);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    auto GenericProfileDataWorkerType::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf("GenericProfileDataWorkerType: ") +JavaString::valueOf(this->getName());
    
}


    auto GenericProfileDataWorkerType::getInstance(Node* node) -> GenericProfileDataWorkerType*{

    std::string name = DomNodeHelper::getTextNodeValue(node);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GenericProfileDataWorkerType*>(GenericProfileDataWorkerType::hashMap->get(name));
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_CPP
