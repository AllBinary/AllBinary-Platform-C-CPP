
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H

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

public constructor (TransformInfoInterface transformInfoInterface, CssStyleValidation cssStyleValidation, string categoryThemePath);

public constructor (TransformInfoInterface transformInfoInterface, HashMap<any, any> hashMap);

public constructor (StoreThemeCategoryInterface storeThemeCategoryInterface, Node node);

                //@Throws(Exception.constructor)
            
    init();

                //@Throws(Exception.constructor)
            
    init(StoreThemeCategoryInterface storeThemeCategoryInterface);

                //@Throws(Exception.constructor)
            
    public TransformInfoInterface getTransformInfoInterface();

    public string getName();

    public string getPreviewImageName();

    public string getPreviewImagePath();

    public string getPath();

                //@Throws(Exception.constructor)
            
    public CssStyleValidation getCssStyleValidation();

    public Boolean isValid();

    public string validationInfo();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

    public any getKey();

    public Vector toVector();

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_H
