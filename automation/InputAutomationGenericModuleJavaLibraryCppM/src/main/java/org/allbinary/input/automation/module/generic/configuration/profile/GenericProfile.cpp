
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileDataWorkerData.h"
#include "GenericProfileDataWorkerType.h"
#include "GenericProfileData.h"

class GenericProfile
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: name: string;

    private: vector: Vector;

    private: genericProfileActions: GenericProfileActions;

public constructor (Node node){

            super();
        this.setName(DomNodeHelper.getTextNodeValue(node));
    
this.vector= new Vector();
    

    nodeList: NodeList = node.getChildNodes()!;;
    
this.logUtil!.putF("Name: " +this.getName() +" Child Nodes: " +nodeList!.getLength(), this, "Contructor");
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    profileNode: Node = nodeList!.item(index)!;;
    

                        if(profileNode!.getNodeName()!.compareTo(GenericProfileDataWorkerData.NAME) == 0)
                        
                                    {
                                    
    genericProfileDataWorkerType: GenericProfileDataWorkerType = GenericProfileDataWorkerType.getInstance(profileNode)!;;
    
this.logUtil!.putF("Adding GenericProfileDataWorkerType: " +genericProfileDataWorkerType!.toString(), this, "Contructor");
    
this.vector.add(genericProfileDataWorkerType);
    

                                    }
                                
}

}


public constructor (string name){

            super();
        this.setName(name);
    
this.vector= new Vector();
    
}


    public Vector getGenericProfileDataWorkerTypeVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.vector;
    
}


    public add(GenericProfileDataWorkerType genericProfileDataWorkerType){

                        if(!this.vector.contains(genericProfileDataWorkerType))
                        this.vector.add(genericProfileDataWorkerType)
}


    public remove(GenericProfileDataWorkerType genericProfileDataWorkerType){
this.vector.remove(genericProfileDataWorkerType);
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = ModDomHelper.createTextNode(document, GenericProfileData.NAME, this.name)!;;
    

    size: int32_t = this.vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    genericProfileDataWorkerType: GenericProfileDataWorkerType = this.vector.get(index) as GenericProfileDataWorkerType;;
    
node.appendChild(genericProfileDataWorkerType!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.name= name;
    
}


    public GenericProfileActions getGenericProfileActions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileActions;
    
}


    public setGenericProfileActions(GenericProfileActions genericProfileActions){
this.genericProfileActions= genericProfileActions;
    
}


};

            

