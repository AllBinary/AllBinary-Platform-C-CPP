
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
        
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigData.h"

class LogConfig
            : public Object
         {
        

    private: isEnabled: bool;

    private: name: string;

    private: description: string;

    private: path: string;

    private: fileName: string;

public constructor (string aName, string aDescription, string aPath, string aFileName){

            super();
        this.isEnabled= false;
    
this.name= aName;
    
this.description= aDescription;
    
this.path= aPath;
    
this.fileName= aFileName;
    
}


public constructor (Node node){

            super();
        
    enabledValueNode: Node = DomSearchHelper.getNode(EntryData.getInstance()!.ENABLE, node.getChildNodes())!;;
    

    isEnabledString: string = DomNodeHelper.getTextNodeValue(enabledValueNode)!;;
    
this.isEnabled= BooleanUtil.getInstance()!.getFromString(isEnabledString);
    

    logConfigData: LogConfigData = LogConfigData.getInstance()!;;
    

    nameValueNode: Node = DomSearchHelper.getNode(logConfigData!.NAME, node.getChildNodes())!;;
    
this.name= DomNodeHelper.getTextNodeValue(nameValueNode);
    

    descriptionValueNode: Node = DomSearchHelper.getNode(logConfigData!.DESCRIPTION, node.getChildNodes())!;;
    
this.description= DomNodeHelper.getTextNodeValue(descriptionValueNode);
    

    fileValueNode: Node = DomSearchHelper.getNode(logConfigData!.FILE, node.getChildNodes())!;;
    
this.fileName= DomNodeHelper.getTextNodeValue(fileValueNode);
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public bool isEnabled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isEnabled;
    
}


    public enable(){
this.isEnabled= true;
    
}


    public disable(){
this.isEnabled= false;
    
}


    public string getDescription(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.description;
    
}


    public string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fileName;
    
}


    public setName(string value){
this.name= value;
    
}


    public setDescription(string value){
this.description= value;
    
}


    public setPath(string value){
this.path= value;
    
}


    public setFileName(string value){
this.fileName= value;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getTypeVector(){

    logKeyVector: BasicArrayList = new BasicArrayListD();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return logKeyVector;
    
}


};

            

