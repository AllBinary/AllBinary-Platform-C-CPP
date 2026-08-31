
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

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfilesData.h"
#include "GenericProfileData.h"
#include "GenericProfile.h"

class GenericProfiles
            : public Object
        : public DomNodeInterface, public DomDocumentMappingInterface {
        

    public static const DEFAULT_PROFILES_PATH: string = "./modules/configs/profiles/";

    public static const DEFAULT_PROFILE_ACTIONS_PATH: string = GenericProfiles.DEFAULT_PROFILES_PATH +"actions/";

    public static const DEFAULT_FILE: string = GenericProfiles.DEFAULT_PROFILES_PATH +"profiles.xml";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: hashMap: HashMap<any, any>;

    private: profilesDefaultListModelHelper: DefaultListModelHelper;

    private: const fileName: string;

public constructor (string fileName){

            super();
        this.fileName= fileName;
    
this.profilesDefaultListModelHelper= new DefaultListModelHelper();
    
this.hashMap= new HashMap<any, any>();
    

                        if(new File(fileName).isFile())
                        
                                    {
                                    
    bytes: std::vector<int8_t> = new Array(100000);;
    

    idFile: FileInputStream = new FileInputStream(fileName);;
    

    length: int32_t = idFile!.read(bytes)!;;
    

    data: string = String.fromCharCode(...bytes);;
    

    endIndex: int32_t = data.lastIndexOf('>')!;;
    

    document: Document = DomDocumentHelper.create(data.substring(0, endIndex +1))!;;
    

    nodeList: NodeList = document.getElementsByTagName(GenericProfilesData.NAME)!;;
    
this.logUtil!.putF("Number Of Profiles Specified: " +nodeList!.getLength(), this, "Contructor");
    

                        if(nodeList != 
                                    null
                                )
                        
                                    {
                                    this.initProfiles(nodeList!.item(0));
    

                                    }
                                
                        else {
                            


                            throw new Exception(GenericProfileActionData.NAME +" Name Node Node Children");
                    

                        }
                            
this.logUtil!.putF("Loaded: " +this.hashMap!.size() +" Configuration Profile Actions", this, "Contructor");
    

                                    }
                                
                        else {
                            this.logUtil!.putF("No Generic Profile: " +fileName, this, "Contructor");
    

                        }
                            
this.getDefaultListModelHelper()!.initDefaultModelList();
    
}


                //@Throws(Exception.constructor)
            
    initProfiles(Node node){

    nodeList: NodeList = node.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    profileNameNode: Node = nodeList!.item(index)!;;
    

                        if(profileNameNode!.getNodeName()!.compareTo(GenericProfileData.NAME) == 0)
                        
                                    {
                                    
    genericProfile: GenericProfile = new GenericProfile(profileNameNode);;
    
this.hashMap!.put(genericProfile!.getName(), genericProfile);
    
this.getDefaultListModelHelper()!.add(genericProfile!.getName());
    

                                    }
                                
}

}


    public DefaultListModelHelper getDefaultListModelHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.profilesDefaultListModelHelper;
    
}


                //@Throws(Exception.constructor)
            
    public GenericProfile get(string name){

    genericProfile: GenericProfile = this.hashMap!.get(name) as GenericProfile;;
    

                        if(genericProfile == 
                                    null
                                )
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF("No Generic Profile Named: " +name +" availability was: " +this.hashMap, this, commonStrings!.GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return genericProfile;
    
}


                //@Throws(Exception.constructor)
            
    public add(string name){
this.hashMap!.put(name, new GenericProfile(name));
    
this.getDefaultListModelHelper()!.add(name);
    
this.getDefaultListModelHelper()!.initDefaultModelList();
    
this.save();
    
}


                //@Throws(Exception.constructor)
            
    public remove(string name){
this.hashMap!.remove(name);
    
this.getDefaultListModelHelper()!.remove(name);
    
this.getDefaultListModelHelper()!.initDefaultModelList();
    
this.save();
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(GenericProfilesData.NAME)!;;
    

    set: Set = this.hashMap!.keys()!;;
    

    nameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    genericProfile: GenericProfile = this.hashMap!.get(nameArray[index]! as string) as GenericProfile;;
    
node.appendChild(genericProfile!.toXmlNode(document));
    
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


                //@Throws(Exception.constructor)
            
    public save(){

    idFile: FileOutputStream = new FileOutputStream(this.fileName);;
    

    idOutData: DataOutputStream = new DataOutputStream(idFile);;
    

    documentString: string = DomDocumentHelper.toString(this.toXmlDoc())!;;
    
idOutData!.writeBytes(documentString);
    
}


};

            

