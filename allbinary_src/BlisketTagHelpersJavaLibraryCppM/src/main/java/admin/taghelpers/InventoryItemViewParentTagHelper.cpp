
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <taghelpers/ValidationViewHelper.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/InventoryItemView.h>

      
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryItemViewParentTagHelper
            : public Object
         {

    private: static InventoryItemViewParentTagHelper instance() { return InventoryItemViewParentTagHelper(); }

    public: static InventoryItemViewParentTagHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventoryItemViewParentTagHelper::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: InventoryItemView getInventoryItemView(HelperTag inventoryTag){

                        if(inventoryTag != 
                                    nullptr
                                )
                        
                                    {
                                    this->checkForValidationViewHelper(inventoryTag.getHelper());
    

    ValidationViewHelper validationViewHelper = inventoryTag.getHelper() as ValidationViewHelper;;
    

    TransformInterface viewObject = validationViewHelper.getViewObject();;
    

                        if(viewObject.getTypeId() != InventoryItemView::TYPE_ID)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Must have ");
    
stringBuffer.append("InventoryItemView and not: ");
    
stringBuffer.append(inventoryTag.getHelper().constructor.name.toString()!);
    



                            throw Exception(stringBuffer.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewObject as InventoryItemView;
    

                                    }
                                
                        else {
                            


                            throw Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: DownloadableInventoryItemView getDownloadableInventoryItemView(HelperTag inventoryTag){

                        if(inventoryTag != 
                                    nullptr
                                )
                        
                                    {
                                    this->checkForValidationViewHelper(inventoryTag.getHelper());
    

    ValidationViewHelper validationViewHelper = inventoryTag.getHelper() as ValidationViewHelper;;
    

    TransformInterface viewObject = validationViewHelper.getViewObject();;
    

                        if(viewObject.getTypeId() != DownloadableInventoryItemView::TYPE_ID)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Must have ");
    
stringBuffer.append("DownloadableInventoryItemView and not: ");
    
stringBuffer.append(inventoryTag.getHelper().constructor.name.toString()!);
    



                            throw Exception(stringBuffer.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewObject as DownloadableInventoryItemView;
    

                                    }
                                
                        else {
                            


                            throw Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: RequestMapInterface getRequestMapInterface(HelperTag inventoryTag){

                        if(inventoryTag != 
                                    nullptr
                                )
                        
                                    {
                                    this->checkForValidationViewHelper(inventoryTag.getHelper());
    

    ValidationViewHelper validationViewHelper = inventoryTag.getHelper() as ValidationViewHelper;;
    

    TransformInterface viewObject = validationViewHelper.getViewObject();;
    

                        if(viewObject.getTypeId() != InventoryItemView::TYPE_ID && viewObject.getTypeId() != DownloadableInventoryItemView::TYPE_ID)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Must have ");
    
stringBuffer.append("specific TYPE_ID and not: ");
    
stringBuffer.append(inventoryTag.getHelper().constructor.name.toString()!);
    



                            throw Exception(stringBuffer.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewObject as RequestMapInterface;
    

                                    }
                                
                        else {
                            


                            throw Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void checkForValidationViewHelper(Object* helperObject){

                        if(!(helperObject instanceof ValidationViewHelper))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Must have ");
    
stringBuffer.append("ValidationViewHelper");
    
stringBuffer.append("and not: ");
    
stringBuffer.append(helperObject->constructor.name.toString()!);
    



                            throw Exception(stringBuffer.toString());
                    

                                    }
                                
}


};

            

