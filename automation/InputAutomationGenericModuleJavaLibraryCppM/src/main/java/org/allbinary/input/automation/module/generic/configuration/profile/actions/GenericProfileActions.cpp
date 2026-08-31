
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileActionsJPanel.h"
#include "GenericProfileActionsData.h"
#include "GenericProfileActionData.h"
#include "GenericProfileAction.h"

class GenericProfileActions
            : public Object
        : public DomNodeInterface, public DomDocumentMappingInterface {
        

    public static const DEFAULT_PROFILE_ACTIONS_PATH: string = GenericProfiles.DEFAULT_PROFILES_PATH +"actions/";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonFileStrings: CommonDataFileStrings = CommonDataFileStrings.getInstance()!;

    private: name: string;

    private: genericProfileActionsJPanel: GenericProfileActionsJPanel;

    private: actionsDefaultListModelHelper: DefaultListModelHelper;

    private: hashMap: HashMap<any, any>;

public constructor (GenericProfileActionsJPanel genericProfileActionsJPanel, string name){

            super();
        this.setName(name);
    
this.init(genericProfileActionsJPanel);
    
this.load();
    
}


public constructor (GenericProfileActionsJPanel genericProfileActionsJPanel, AbPath abPath, string name){

            super();
        this.setName(name);
    
this.init(genericProfileActionsJPanel);
    
this.load();
    
}


public constructor (GenericProfileActionsJPanel genericProfileActionsJPanel, FileInputStream fileInputStream, string name){

            super();
        this.setName(name);
    
this.init(genericProfileActionsJPanel);
    
this.fileInit(fileInputStream);
    
}


                //@Throws(Exception.constructor)
            
    init(GenericProfileActionsJPanel genericProfileActionsJPanel){
this.setGenericProfileActionsJPanel(genericProfileActionsJPanel);
    
this.actionsDefaultListModelHelper= new DefaultListModelHelper();
    
this.setHashMap(new HashMap<any, any>());
    
}


                //@Throws(Exception.constructor)
            
    public save(){

    idFile: FileOutputStream = new FileOutputStream(GenericProfileActions.DEFAULT_PROFILE_ACTIONS_PATH +getName() +this.commonFileStrings!._XML);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    
idOutData!.writeBytes(DomDocumentHelper.toString(this.toXmlDoc()));
    
}


    public File getFile(string name){

    fileName: string = DEFAULT_PROFILE_ACTIONS_PATH +name +this.commonFileStrings!._XML;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new File(fileName);
    
}


                //@Throws(Exception.constructor)
            
    load(){

    file: File = this.getFile(getName())!;;
    

                        if(file.isFile())
                        
                                    {
                                    
    idFile: FileInputStream = new FileInputStream(file);;
    
this.fileInit(idFile);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("No Profile: " +file.getAbsolutePath(), this, "Contructor");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    fileInit(FileInputStream fileInputStream){

    bytes: std::vector<int8_t> = new Array(100000);;
    

    length: int32_t = fileInputStream!.read(bytes)!;;
    

    data: string = String.fromCharCode(...bytes);;
    

    endIndex: int32_t = data.lastIndexOf('>')!;;
    

    document: Document = DomDocumentHelper.create(data.substring(0, endIndex +1))!;;
    

    nameNodeList: NodeList = document.getElementsByTagName(GenericProfileActionsData.NAME)!;;
    
this.logUtil!.putF("Number Of Profiles Specified: " +nameNodeList!.getLength(), this, "Contructor");
    




                        for (
    index: int32_t = 0;index < nameNodeList!.getLength(); index++)
        {

    node: Node = nameNodeList!.item(index)!;;
    

    nodeList: NodeList = node.getChildNodes()!;;
    

                        if(nodeList != 
                                    null
                                )
                        
                                    {
                                    this.initActions(nodeList);
    

                                    }
                                
                        else {
                            


                            throw new Exception(GenericProfileActionData.NAME +" Name Node Node Children");
                    

                        }
                            
}

this.logUtil!.putF("Loaded: " +this.getHashMap()!.size() +" Configuration Profile Action(s)", this, "Contructor");
    
this.getDefaultListModelHelper()!.initDefaultModelList();
    
}


                //@Throws(Exception.constructor)
            
    initActions(NodeList nodeList){




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    actionNode: Node = nodeList!.item(index)!;;
    

                        if(actionNode != 
                                    null
                                )
                        
                                    {
                                    
    genericConfigurationProfileAction: GenericProfileAction = new GenericProfileAction(this.getGenericProfileActionsJPanel()!.getGenericProfileActionJPanel(), actionNode);;
    
this.getHashMap()!.put(genericConfigurationProfileAction!.getName(), genericConfigurationProfileAction);
    
this.getDefaultListModelHelper()!.add(genericConfigurationProfileAction!.getName());
    

                                    }
                                
                        else {
                            


                            throw new Exception(GenericProfileActionData.NAME +" Node Null");
                    

                        }
                            
}

}


    public DefaultListModelHelper getDefaultListModelHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.actionsDefaultListModelHelper;
    
}


    public GenericProfileAction getAction(string string){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getHashMap()!.get(string) as GenericProfileAction;
    
}


                //@Throws(Exception.constructor)
            
    public add(string name){

    genericProfileAction: GenericProfileAction = new GenericProfileAction(name);;
    
this.getHashMap()!.put(genericProfileAction!.getName(), genericProfileAction);
    
this.getDefaultListModelHelper()!.add(genericProfileAction!.getName());
    
this.getDefaultListModelHelper()!.initDefaultModelList();
    
this.save();
    
}


                //@Throws(Exception.constructor)
            
    public remove(string name){
this.getHashMap()!.remove(name);
    
this.getDefaultListModelHelper()!.remove(name);
    
this.getDefaultListModelHelper()!.initDefaultModelList();
    
this.save();
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
this.logUtil!.putF("HashMap: " +hashMap!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(GenericProfileActionsData.NAME)!;;
    

    set: Set = this.getHashMap()!.keys()!;;
    

    actionNameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = actionNameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextActionName: string = actionNameArray[index]! as string;;
    

    nextGenericProfileAction: GenericProfileAction = this.getAction(nextActionName) as GenericProfileAction;;
    
node.appendChild(nextGenericProfileAction!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public Document toXmlDoc(){

    document: Document = DomDocumentHelper.create()!;;
    

    node: Node = this.toXmlNode(document)!;;
    
document.appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


    public GenericProfileActionsJPanel getGenericProfileActionsJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileActionsJPanel;
    
}


    public setGenericProfileActionsJPanel(GenericProfileActionsJPanel genericProfileActionsJPanel){
this.genericProfileActionsJPanel= genericProfileActionsJPanel;
    
}


    public HashMap<any, any> getHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashMap;
    
}


    public setHashMap(HashMap<any, any> hashMap){
this.hashMap= hashMap;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.name= name;
    
}


};

            

