
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

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModuleView.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingMethodsData.h"
#include "ShippingMethodData.h"

class ShippingMethodsFactory
            : public Object
         {
        

    private: static const SHIPPINGMETHODSFILEPATHSTRING: string;

                    static int32_t initResult = ShippingMethodsFactory::init();
                static int32_t init() { 
                    

    stringBuffer: StringMaker = new StringMaker();;
    

    sep: string = AbPathData.getInstance()!.SEPARATOR;;
    
stringBuffer!.append(sep);
    
stringBuffer!.append("generic");
    
stringBuffer!.append(sep);
    
stringBuffer!.append("shipping");
    
stringBuffer!.append(sep);
    
SHIPPINGMETHODSFILEPATHSTRING= stringBuffer!.toString();
    


                    return 0;
                }
            
    private: static const SHIPPINGMETHODSFILENAME: string = "shippingMethods.xml";

    private: defaultShippingMethodInterface: ShippingInterface;

    private: document: Document;

    private: shippingVector: Vector;

public constructor (AbeClientInformationInterface abeClientInformation, StoreFrontInterface storeFrontInterface){

            super();
        
    stringBuffer: StringMaker = new StringMaker();;
    

    sep: string = AbPathData.getInstance()!.SEPARATOR;;
    
stringBuffer!.append(URLGLOBALS.getMainPath());
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH);
    
stringBuffer!.append(storeFrontInterface!.getName());
    
stringBuffer!.append(sep);
    
stringBuffer!.append(ShippingMethodsFactory.SHIPPINGMETHODSFILEPATHSTRING);
    

    abPath: AbPath = new AbPath(stringBuffer!.toString(), this.SHIPPINGMETHODSFILENAME) as AbPath;;
    

    data: string = new CryptFileReader(TransformInfoObjectConfigData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoObjectConfigData.getInstance()!.ENCRYPTED_EXTENSION).get(abPath)!;;
    
this.document= DomDocumentHelper.create(data);
    
this.shippingVector= new Vector();
    

    nodeList: NodeList = this.document.getElementsByTagName(ShippingMethodsData.NAME)!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    node: Node = nodeList!.item(index)!;;
    

    shippingMethodNodeChildren: NodeList = node.getChildNodes()!;;
    

    shippingMethodNameNode: Node = DomSearchHelper.getNode(ShippingMethodData.NAME, shippingMethodNodeChildren)!;;
    

    classNameNode: Node = DomSearchHelper.getNode(DynamicObjectData.NAME, shippingMethodNameNode!.getChildNodes())!;;
    

    shippingMethodClassName: string = DomNodeHelper.getTextNodeValue(classNameNode)!;;
    

    shippingMethodInterface: ShippingInterface = AbeFactory.getInstance()!.getInstance(abeClientInformation, shippingMethodClassName) as ShippingInterface;;
    
this.shippingVector!.add(shippingMethodInterface);
    

    defaultShippingMethodNameNode: Node = DomSearchHelper.getNode(ShippingMethodData.DEFAULT, shippingMethodNameNode!.getChildNodes())!;;
    

    defaultShippingMethodNameNodeValue: string = DomNodeHelper.getTextNodeValue(defaultShippingMethodNameNode)!;;
    

                        if(defaultShippingMethodNameNodeValue != 
                                    null
                                 && defaultShippingMethodNameNodeValue!.compareTo(ShippingMethodData.DEFAULT) == 0)
                        this.defaultShippingMethodInterface= shippingMethodInterface
}


                        if(this.shippingVector!.length < 1)
                        
                                    {
                                    this.defaultShippingMethodInterface= new BasicWeightShippingModuleView();
    
this.shippingVector!.add(this.defaultShippingMethodInterface);
    
this.shippingVector!.add(new NoShippingModuleView());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public Vector getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.shippingVector;
    
}


    public ShippingInterface getDefaultInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.defaultShippingMethodInterface;
    
}


};

            

