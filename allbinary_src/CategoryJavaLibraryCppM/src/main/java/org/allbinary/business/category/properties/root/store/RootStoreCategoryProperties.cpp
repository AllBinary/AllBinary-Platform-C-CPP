
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RootStoreCategoryProperties
            : public Object
        : public RootCategoryPropertiesInterface, public CategoryPropertiesInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbPathData pathData = AbPathData::getInstance();

    private: AbPath fileAbPath;

    private: AbPath abPath;

    private: std::string category;

    private: bool isRealRoot;

    protected: AbPath webAppAbPath;

    protected: TransformInfoInterface transformInfoInterface;

public: RootStoreCategoryProperties(TransformInfoInterface transformInfoInterface){
this->transformInfoInterface= transformInfoInterface;
    
this->abPath= AbPath::createAbPath();
    
this->category= CategoryData::getInstance().ROOTCATEGORY;
    
this->isRealRoot= true;
    
this->initPath();
    
this->log();
    
}


public: RootStoreCategoryProperties(TransformInfoInterface transformInfoInterface, AbPath categoryAbPath){
this->transformInfoInterface= transformInfoInterface;
    
this->abPath= categoryAbPath;
    
this->category= this->pathData.getNameFromPath(categoryAbPath.toString());
    

                        if(StringValidationUtil::getInstance().isEmpty(this->category))
                        
                                    {
                                    this->isRealRoot= true;
    
this->category= CategoryData::getInstance().ROOTCATEGORY;
    

                                    }
                                
this->initPath();
    
this->log();
    
}


public: RootStoreCategoryProperties(TransformInfoInterface transformInfoInterface, Node node){
this->transformInfoInterface= transformInfoInterface;
    

    std::string categoryPath = CategoryUtil::getNameFromNode(node);;
    
this->abPath= AbPath(categoryPath, StringUtil::getInstance().EMPTY_STRING);
    
this->category= this->pathData.getNameFromPath(categoryPath);
    

                        if(StringValidationUtil::getInstance().isEmpty(this->category))
                        
                                    {
                                    this->isRealRoot= true;
    
this->category= CategoryData::getInstance().ROOTCATEGORY;
    

                                    }
                                
this->initPath();
    
this->log();
    
}


public: RootStoreCategoryProperties(TransformInfoInterface transformInfoInterface, HashMap<any, any> categoryPropertiesHashMap){
this->transformInfoInterface= transformInfoInterface;
    

    std::string categoryPath = .toCharArray();;
    
this->abPath= AbPath(categoryPath, StringUtil::getInstance().EMPTY_STRING);
    
this->category= this->pathData.getNameFromPath(categoryPath);
    

                        if(StringValidationUtil::getInstance().isEmpty(this->category))
                        
                                    {
                                    this->isRealRoot= true;
    
this->category= CategoryData::getInstance().ROOTCATEGORY;
    

                                    }
                                
this->initPath();
    
this->log();
    
}


                //@Throws(Exception.constructor)
            
    protected: void initPath(){

    TransformInfoHttpInterface transformInfoHttpStoreInterface = this->transformInfoInterface as TransformInfoHttpInterface;;
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(transformInfoHttpStoreInterface.getStoreName());;
    

    std::string postPath = storeFrontInterface.getCurrentHostNamePath() +storeFrontInterface.getCategoryPath();;
    

    HttpServletRequest httpServletRequest = transformInfoHttpStoreInterface.getPageContext().getRequest() as HttpServletRequest;;
    
this->webAppAbPath= AbPath(httpServletRequest.getContextPath() +postPath, StringUtil::getInstance().EMPTY_STRING);
    
this->setRootFilePath(AbPath(URLGLOBALS::getMainPath() +postPath, StringUtil::getInstance().EMPTY_STRING));
    
}


    public: bool isRealRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRealRoot;
    
}


    public: bool isRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue();
    
}


    public: void setPath(AbPath path){
this->abPath= path;
    
}


    public: void setRootFilePath(AbPath value){
this->fileAbPath= value;
    
}


    public: AbPath getRootFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fileAbPath;
    
}


    public: std::string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->category;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getWebAppPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->webAppAbPath;
    
}


    public: AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abPath;
    
}


    public: std::string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue() +AbPathData::getInstance().EXTENSION_SEP +CategoryData::getInstance().UNCRYPTED_EXTENSION;
    
}


    public: void setValue(std::string value){
this->category= value;
    
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> categoryHashMap = HashMap<any, any>();;
    
categoryHashMap.put(CategoryData::getInstance().NAME, this->getValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


    public: Vector toVector(){

    Vector categoryVector = Vector();;
    
categoryVector.add(this->getValue());
    



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


    public: void log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(StringMaker().append("filePath = ").append(this->fileAbPath.toString()).append("\npath = ").append(this->abPath.toString()).append("\ncategory = ").append(this->category).toString(), this, "log()");
    

                                    }
                                
}


};

            

