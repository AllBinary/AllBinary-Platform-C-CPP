
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoHttpInterface.h"
//Hack class should not exist
class TransformInfoBasic: public AbContext, public TransformInfoHttpInterface {

    private: StoreFrontInterface storeFrontInterface;

public: TransformInfoBasic(StoreFrontInterface storeFrontInterface, HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super(propertiesHashMap, pageContext);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->storeFrontInterface= storeFrontInterface;
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontInterface.getName();;
    
}


    public: std::string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commonStrings.NOT_IMPLEMENTED;
    
}


    public: void override(HashMap<any, any> hashMap){
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string getObjectFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Object* getObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: TransformInfoObjectConfigInterface getObjectConfigInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void setObjectConfigInterface(Object transformInfoObjectConfigInterface){
}


    public: AbPath getTemplateFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string getTemplateFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string getTemplate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: AbPath getDataFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string getDataFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Document getDataDocument(){



                            throw Exception(commonStrings.NOT_IMPLEMENTED);
                    
}


    public: void setName(std::string value){
}


    public: void setStoreName(std::string value){
}


    public: void setObjectFile(std::string value){
}


    public: void setObject(Object anyType){
}


    public: void setObjectConfigFile(std::string value){
}


    public: void setTemplateFile(std::string value){
}


    public: void setTemplate(std::string value){
}


    public: void setDataFile(std::string value){
}


    public: void setData(std::string value){
}


    public: void setChild(){
}


    public: bool isChild(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: std::string getImportUriPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void setImportUriPath(std::string importUriPath){
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

