
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigType.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypesData.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
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
            
    Document getDoc(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(PATH_GLOBALS.getInstance()!.INIT_PATH);
    
stringBuffer!.append(this.getFileName());
    

    file: AbFile = AbFile.createAbFile(stringBuffer!.toString())!;;
    

    document: Document = DomDocumentHelper.create(new AbFileLocalInputStream(file))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getTypeVector(){

    logKeyVector: BasicArrayList = new BasicArrayListD();;
    

    document: Document = this.getDoc()!;;
    

    logConfigTypesNodeList: NodeList = document.getElementsByTagName(LogConfigTypesData.getInstance()!.NAME)!;;
    

    logConfigTypesNode: Node = logConfigTypesNodeList!.item(0)!;;
    

    logConfigTypeNodeVector: Vector = DomSearchHelper.getAllNodes(LogConfigTypeData.getInstance()!.NAME, logConfigTypesNode!.getChildNodes())!;;
    

    size: int32_t = logConfigTypeNodeVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    node: Node = logConfigTypeNodeVector!.elementAt(i) as Node;;
    

    logType: LogConfigType = LogConfigTypes.getInstance(node)!;;
    
logKeyVector!.add(logType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return logKeyVector;
    
}


};

            

