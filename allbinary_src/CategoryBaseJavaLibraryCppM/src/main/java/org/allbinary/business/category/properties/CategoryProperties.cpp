
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPropertiesInterface.h"

class CategoryProperties
            : public Object
        : public CategoryPropertiesInterface {

    private: static const int32_t MAXDEPTH = 100;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string category;

public: CategoryProperties(std::string name){
this->category= name;
    
}


public: CategoryProperties(Node node){
this->category= CategoryUtil::getNameFromNode(node);
    
}


public: CategoryProperties(HashMap<Object*, Object*> categoryPropertiesHashMap){
this->category= .toCharArray();
    
}


    public: bool isRealRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
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
            
    public: AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface){

    AbPathData abPathData = AbPathData::getInstance();;
    

    StringMaker pathStringBuffer = StringMaker();;
    

    BasicArrayList list = BasicArrayListD();;
    

    CategoryInterface nextParentCategoryInterface = categoryHierarchyInterface.getParent();;
    

                        if(this != nextParentCategoryInterface.getProperties())
                        
                                    {
                                    
    int32_t depthIndex = 0;;
    

        while(nextParentCategoryInterface != 
                                    nullptr
                                )
        {

                        if(nextParentCategoryInterface.getProperties().isRealRoot())
                        
                                    {
                                    break;

                    

                                    }
                                

                        if(nextParentCategoryInterface.getProperties().isRoot())
                        
                                    {
                                    list.addAt(0, nextParentCategoryInterface.getPath().toString());
    

                                    }
                                
                        else {
                            pathStringBuffer.delete(0, pathStringBuffer.length());
    
list.addAt(0, pathStringBuffer.append(abPathData.SEPARATOR).append(nextParentCategoryInterface.getProperties().getValue()).toString());
    

                        }
                            

                        if(nextParentCategoryInterface == nextParentCategoryInterface.getHierarchy().getParent())
                        
                                    {
                                    break;

                    

                                    }
                                
nextParentCategoryInterface= nextParentCategoryInterface.getHierarchy().getParent();
    
depthIndex++;
    

                        if(depthIndex > CategoryProperties::MAXDEPTH)
                        
                                    {
                                    


                            throw Exception("Probably Major Error");
                    

                                    }
                                
}


                                    }
                                
pathStringBuffer.delete(0, pathStringBuffer.length());
    
pathStringBuffer.append(abPathData.SEPARATOR).append(this->getValue());
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
pathStringBuffer.append(list.get(index));
    
}

pathStringBuffer.append(abPathData.SEPARATOR);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF("path = " +pathStringBuffer.toString(), this, "getPath");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(pathStringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);
    
}


    public: std::string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue() +AbPathData::getInstance().EXTENSION_SEP +CategoryData::getInstance().UNCRYPTED_EXTENSION;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getWebAppPath(){



                            throw Exception("Not Root");
                    
}


    public: void setValue(std::string value){
this->category= value;
    
}


    public: Boolean isValid(){

    Boolean returnBoolean = Boolean::FALSE;;
    

                        if(StringValidationUtil::getInstance().isValidRequired(this->category, 1, AbSqlData::MAXSTRING))
                        
                                    {
                                    returnBoolean= Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnBoolean;
    
}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> categoryHashMap = StdUtil::getInstance().createHashMap();;
    
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

            

