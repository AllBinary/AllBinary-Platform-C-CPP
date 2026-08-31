
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
        

    private: static hashMap: HashMap<any, any> = new HashMap<any, any>();

    public static SAVED_CAPTURE: GenericProfileDataWorkerType = SavedCaptureGenericProfileDataWorkerType.SAVED_CAPTURE;

    public static SCREEN_CAPTURE: GenericProfileDataWorkerType = new GenericProfileDataWorkerType("Screen " +InputImageType.CAPTURE.getName());

    public static COMPARISON: GenericProfileDataWorkerType = new GenericProfileDataWorkerType(InputImageType.COMPARISON.getName());

    public static MOTION: GenericProfileDataWorkerType = new GenericProfileDataWorkerType(InputImageType.MOTION.getName());

    public static GenericProfileDataWorkerType getInstance(Node node){

    name: string = DomNodeHelper.getTextNodeValue(node)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GenericProfileDataWorkerType.hashMap!.get(name) as GenericProfileDataWorkerType;
    
}


    private: name: string;

public constructor (string name){

            super();
        this.setName(name);
    
GenericProfileDataWorkerType.hashMap!.put(this.getName(), this);
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.name= name;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = ModDomHelper.createTextNode(document, GenericProfileDataWorkerData.NAME, this.name)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "GenericProfileDataWorkerType: " +this.getName();
    
}


};

            

