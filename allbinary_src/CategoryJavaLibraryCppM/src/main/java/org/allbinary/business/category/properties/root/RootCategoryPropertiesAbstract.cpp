
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
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RootCategoryPropertiesInterface.h"

class RootCategoryPropertiesAbstract
            : public Object
        : public RootCategoryPropertiesInterface {

    private: const std::string category = CategoryData::getInstance().ROOTCATEGORY;

    private: const std::string fileName = this->category +AbPathData::getInstance().EXTENSION_SEP +CategoryData::getInstance().UNCRYPTED_EXTENSION;

public: RootCategoryPropertiesAbstract(){
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue();
    
}


    public: std::string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->category;
    
}


                //@Throws(Exception.constructor)
            
    public: void setValue(std::string value){



                            throw Exception("No Value Allowed");
                    
}


                //@Throws(Exception.constructor)
            
    public: void setRootFilePath(AbPath value){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setRootFilePath(std::string value){



                            throw Exception("No Value Allowed");
                    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getRootFilePath(){



                            throw Exception("No Value Allowed");
                    
}


                //@Throws(Exception.constructor)
            
    public: bool isRealRoot(){



                            throw Exception("No A Real Root");
                    
}


                //@Throws(Exception.constructor)
            
    public: bool isRoot(){



                            throw Exception("Root but not implemented");
                    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWebAppPath(CategoryHierarchyInterface categoryHierarchyInterface){



                            throw Exception("Not Root");
                    
}


    public: AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath::createAbPath();;
    
}


    public: std::string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileName;
    
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> categoryHashMap = StdUtil::getInstance().createHashMap();;
    
categoryHashMap.put(CategoryData::getInstance().NAME, this->category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


    public: BasicArrayList toVector(){

    BasicArrayList categoryVector = BasicArrayListD();;
    
categoryVector.add(this->category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

