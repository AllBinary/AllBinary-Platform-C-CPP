
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoHttpInterface.h"
//Hack class should not exist
class TransformInfoBasic: public AbContext: public TransformInfoHttpInterface {
        

    private: storeFrontInterface: StoreFrontInterface;

public constructor (StoreFrontInterface storeFrontInterface, HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super(propertiesHashMap, pageContext);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.storeFrontInterface= storeFrontInterface;
    
}


    public string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeFrontInterface!.getName();;
    
}


    public string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commonStrings!.NOT_IMPLEMENTED;
    
}


    public override(HashMap<any, any> hashMap){
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string getObjectFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public any getObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public TransformInfoObjectConfigInterface getObjectConfigInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public setObjectConfigInterface(Object transformInfoObjectConfigInterface){
}


    public AbPath getTemplateFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string getTemplateFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string getTemplate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public AbPath getDataFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string getDataFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public Document getDataDocument(){



                            throw new Exception(commonStrings!.NOT_IMPLEMENTED);
                    
}


    public setName(string value){
}


    public setStoreName(string value){
}


    public setObjectFile(string value){
}


    public setObject(Object anyType){
}


    public setObjectConfigFile(string value){
}


    public setTemplateFile(string value){
}


    public setTemplate(string value){
}


    public setDataFile(string value){
}


    public setData(string value){
}


    public setChild(){
}


    public bool isChild(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public string getImportUriPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public setImportUriPath(string importUriPath){
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

