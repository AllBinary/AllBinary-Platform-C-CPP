
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileDataWorkerTypeInterface.h"
#include "SavedCaptureGenericProfileDataWorkerType.h"
#include "GenericProfileDataWorkerData.h"

class GenericProfileDataWorkerType
            : public Object
        : public GenericProfileDataWorkerTypeInterface {

    private: static HashMap<any, any> hashMap = HashMap<any, any>();

    public: static GenericProfileDataWorkerType SAVED_CAPTURE = SavedCaptureGenericProfileDataWorkerType::SAVED_CAPTURE;

    public: static GenericProfileDataWorkerType SCREEN_CAPTURE = GenericProfileDataWorkerType("Screen " +InputImageType::CAPTURE.getName());

    public: static GenericProfileDataWorkerType COMPARISON = GenericProfileDataWorkerType(InputImageType::COMPARISON.getName());

    public: static GenericProfileDataWorkerType MOTION = GenericProfileDataWorkerType(InputImageType::MOTION.getName());

    public: static GenericProfileDataWorkerType getInstance(Node node){

    std::string name = DomNodeHelper::getTextNodeValue(node);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GenericProfileDataWorkerType::hashMap.get(name) as GenericProfileDataWorkerType;
    
}


    private: std::string name;

public: GenericProfileDataWorkerType(std::string name){
this->setName(name);
    
GenericProfileDataWorkerType::hashMap.put(this->getName(), this);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = ModDomHelper::createTextNode(document, GenericProfileDataWorkerData::NAME, this->name);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "GenericProfileDataWorkerType: " +this->getName();
    
}


};

            

