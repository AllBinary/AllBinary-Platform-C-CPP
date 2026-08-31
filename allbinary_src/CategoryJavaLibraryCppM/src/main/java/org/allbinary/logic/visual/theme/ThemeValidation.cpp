
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThemeInterface.h"
#include "ThemeData.h"

class ThemeValidation
            : public Object
        : public ThemeInterface, public ValidationInterface, public DomNodeInterface, public CompositeTransformInfoInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: transformInfoInterface: TransformInfoInterface;

    private: styleValidationInterface: ValidationInterface;

    private: themeName: string;

    private: themePreviewImageName: string;

    private: webAppAbPath: AbPath;

    private: categoryAbPath: AbPath;

    private: fileAbPath: AbPath;

public constructor (TransformInfoInterface transformInfoInterface, CssStyleValidation cssStyleValidation, string categoryThemePath){

            super();
        this.transformInfoInterface= transformInfoInterface;
    

    pathData: AbPathData = AbPathData.getInstance()!;;
    

    pathUtil: PathUtil = PathUtil.getInstance()!;;
    
this.categoryAbPath= pathUtil!.removeNameFromPath(categoryThemePath);
    
this.themeName= pathData!.getNameFromPath(categoryThemePath);
    
this.styleValidationInterface= cssStyleValidation;
    
this.init();
    
}


public constructor (TransformInfoInterface transformInfoInterface, HashMap<any, any> hashMap){

            super();
        this.transformInfoInterface= transformInfoInterface;
    

    categoryThemeAbPath: AbPath = new AbPath(hashMap!.get(ThemeData.getInstance()!.PATH) as string, StringUtil.getInstance()!.EMPTY_STRING);;
    

    pathData: AbPathData = AbPathData.getInstance()!;;
    

    pathUtil: PathUtil = PathUtil.getInstance()!;;
    
this.categoryAbPath= pathUtil!.removeNameFromPath(categoryThemeAbPath!.toString());
    
this.themeName= pathData!.getNameFromPath(categoryThemeAbPath!.toString());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("CategoryThemePath: ");
    
stringBuffer!.append(categoryThemeAbPath!.toString());
    
stringBuffer!.append(" & CategoryPath: ");
    
stringBuffer!.append(this.categoryAbPath!.toString());
    
stringBuffer!.append(" & ThemeName: ");
    
stringBuffer!.append(this.themeName);
    
this.logUtil!.putF("Http Request Constructor", this, stringBuffer!.toString());
    

                                    }
                                
this.init();
    
}


public constructor (StoreThemeCategoryInterface storeThemeCategoryInterface, Node node){

            super();
        this.transformInfoInterface= storeThemeCategoryInterface!.getTransformInfoInterface();
    
this.categoryAbPath= storeThemeCategoryInterface!.getPath();
    

    themeNameNode: Node = DomSearchHelper.getNode(ThemeData.getInstance()!.NAME, node.getChildNodes())!;;
    

    valueNode: Node = DomSearchHelper.getNode(DomData.VALUE, themeNameNode!.getChildNodes())!;;
    
this.themeName= DomNodeHelper.getTextNodeValue(valueNode);
    

    previewImageNameNode: Node = DomSearchHelper.getNode(ThemeData.getInstance()!.PREVIEW_IMAGE_NAME, node.getChildNodes())!;;
    

    previewImageNameValueNode: Node = DomSearchHelper.getNode(DomData.VALUE, previewImageNameNode!.getChildNodes())!;;
    
this.themePreviewImageName= DomNodeHelper.getTextNodeValue(previewImageNameValueNode);
    
this.webAppAbPath= storeThemeCategoryInterface!.getWebAppPath();
    
this.init(storeThemeCategoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    init(){

    categoryFactoryInterface: CategoryFactoryInterface = new StoreThemeCategoryFactory(this.getTransformInfoInterface());;
    

    categoryLoaderInterface: CategoryLoaderInterface = CategoryLoaderFactory.getInstance(categoryFactoryInterface)!;;
    

    rootStoreThemeCategoryInterface: StoreThemeCategoryInterface = categoryFactoryInterface!.getRootInstance() as StoreThemeCategoryInterface;;
    
this.init(rootStoreThemeCategoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    init(StoreThemeCategoryInterface storeThemeCategoryInterface){
this.fileAbPath= new AbPath(storeThemeCategoryInterface!.getRootFilePath()!.toString() +this.categoryAbPath!.toString(), StringUtil.getInstance()!.EMPTY_STRING);
    
this.webAppAbPath= storeThemeCategoryInterface!.getWebAppPath();
    
}


                //@Throws(Exception.constructor)
            
    public TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transformInfoInterface;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.themeName;
    
}


    public string getPreviewImageName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.themePreviewImageName;
    
}


    public string getPreviewImagePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.webAppAbPath!.toString() +this.categoryAbPath!.toString();
    
}


    public string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryAbPath!.toString();;
    
}


                //@Throws(Exception.constructor)
            
    public CssStyleValidation getCssStyleValidation(){

                        if(this.styleValidationInterface == 
                                    null
                                )
                        
                                    {
                                    
    cssStyleFileAbPath: AbPath = new AbPath(this.fileAbPath!.toString(), this.themeName +AbPathData.getInstance()!.EXTENSION_SEP +CategoryData.getInstance()!.UNCRYPTED_EXTENSION);;
    

    cryptFileReader: CryptFileReader = new CryptFileReader(CategoryData.getInstance()!.UNCRYPTED_EXTENSION, CategoryData.getInstance()!.ENCRYPTED_EXTENSION);;
    

    document: Document = DomDocumentHelper.create(cryptFileReader!.get(cssStyleFileAbPath))!;;
    
this.styleValidationInterface= new CssStyleValidation(document);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.styleValidationInterface as CssStyleValidation;
    
}


    public Boolean isValid(){

        try {
            
    isValid: Boolean = Boolean.TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.categoryAbPath!.toString(), AbSqlData.MINSTRING, AbSqlData.MAXSTRING))
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.themeName, AbSqlData.MINSTRING, AbSqlData.MAXSTRING))
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                

                        if(!this.getCssStyleValidation()!.isValid().valueOf())
                        
                                    {
                                    isValid= Boolean.FALSE;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("End: " +isValid, this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate form", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Theme Validation Error");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();
    
}


    public Vector toVector(){

    vector: Vector = new Vector();;
    
vector.add(this.getName());
    
vector.add(this.getPath());
    
vector.add(this.getPreviewImageName());
    
vector.add(this.getPreviewImagePath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public HashMap<any, any> toHashMap(){

    themeData: ThemeData = ThemeData.getInstance()!;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(themeData!.NAME, this.getName());
    
hashMap!.put(themeData!.PATH, this.getPath());
    
hashMap!.put(themeData!.PREVIEW_IMAGE_NAME, this.getPreviewImageName());
    
hashMap!.put(themeData!.PREVIEW_IMAGE_PATH, this.getPreviewImagePath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = ModDomHelper.createNameValueNodes(document, ThemeData.getInstance()!.NAME, this.toHashMap())!;;
    

    domNodeInterface: DomNodeInterface = this.getCssStyleValidation() as DomNodeInterface;;
    
node.appendChild(domNodeInterface!.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

