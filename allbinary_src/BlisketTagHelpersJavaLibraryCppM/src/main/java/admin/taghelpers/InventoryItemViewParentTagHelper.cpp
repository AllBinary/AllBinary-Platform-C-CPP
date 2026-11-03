
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
        



        #ifndef ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_CPP
        #define ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/InventoryItemViewParentTagHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <taghelpers/ValidationViewHelper.h>

      
#include <tags/HelperTag.h>

      
#include <views/admin/inventory/InventoryItemView.h>

      
#include <views/admin/inventory/download/DownloadableInventoryItemView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InventoryItemViewParentTagHelper::InventoryItemViewParentTagHelper() {
        }
        auto InventoryItemViewParentTagHelper::instance_owner() -> InventoryItemViewParentTagHelper* { static std::unique_ptr<InventoryItemViewParentTagHelper> value(new InventoryItemViewParentTagHelper()); return value.get(); }
InventoryItemViewParentTagHelper* InventoryItemViewParentTagHelper::instance = InventoryItemViewParentTagHelper::instance_owner();

    auto InventoryItemViewParentTagHelper::getInstance() -> InventoryItemViewParentTagHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InventoryItemViewParentTagHelper::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto InventoryItemViewParentTagHelper::getInventoryItemView(HelperTag* inventoryTag) -> InventoryItemView*{

                        if(inventoryTag != 
                                    nullptr
                                )
                        
                                    {
                                    this->checkForValidationViewHelper(inventoryTag->getHelper());
    

    ValidationViewHelper* validationViewHelper = dynamic_cast<ValidationViewHelper*>(inventoryTag->getHelper());;
    

    TransformInterface* viewObject = validationViewHelper->getViewObject();;
    

                        if(viewObject->getTypeId() != InventoryItemView::TYPE_ID)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Must have ");
    
stringBuffer->append("InventoryItemView and not: ");
    
stringBuffer->append(inventoryTag->getHelper()->getClass()->getName());
    



                            throw Exception(stringBuffer->toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<InventoryItemView*>(viewObject);
    

                                    }
                                
                        else {
                            


                            throw Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto InventoryItemViewParentTagHelper::getDownloadableInventoryItemView(HelperTag* inventoryTag) -> DownloadableInventoryItemView*{

                        if(inventoryTag != 
                                    nullptr
                                )
                        
                                    {
                                    this->checkForValidationViewHelper(inventoryTag->getHelper());
    

    ValidationViewHelper* validationViewHelper = dynamic_cast<ValidationViewHelper*>(inventoryTag->getHelper());;
    

    TransformInterface* viewObject = validationViewHelper->getViewObject();;
    

                        if(viewObject->getTypeId() != DownloadableInventoryItemView::TYPE_ID)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Must have ");
    
stringBuffer->append("DownloadableInventoryItemView and not: ");
    
stringBuffer->append(inventoryTag->getHelper()->getClass()->getName());
    



                            throw Exception(stringBuffer->toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<DownloadableInventoryItemView*>(viewObject);
    

                                    }
                                
                        else {
                            


                            throw Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto InventoryItemViewParentTagHelper::getRequestMapInterface(HelperTag* inventoryTag) -> RequestMapInterface*{

                        if(inventoryTag != 
                                    nullptr
                                )
                        
                                    {
                                    this->checkForValidationViewHelper(inventoryTag->getHelper());
    

    ValidationViewHelper* validationViewHelper = dynamic_cast<ValidationViewHelper*>(inventoryTag->getHelper());;
    

    TransformInterface* viewObject = validationViewHelper->getViewObject();;
    

                        if(viewObject->getTypeId() != InventoryItemView::TYPE_ID && viewObject->getTypeId() != DownloadableInventoryItemView::TYPE_ID)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Must have ");
    
stringBuffer->append("specific TYPE_ID and not: ");
    
stringBuffer->append(inventoryTag->getHelper()->getClass()->getName());
    



                            throw Exception(stringBuffer->toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<RequestMapInterface*>(viewObject);
    

                                    }
                                
                        else {
                            


                            throw Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto InventoryItemViewParentTagHelper::checkForValidationViewHelper(Object* helperObject) -> void{

                        if(!((dynamic_cast<const ValidationViewHelper*>(helperObject) != nullptr)))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Must have ");
    
stringBuffer->append("ValidationViewHelper");
    
stringBuffer->append("and not: ");
    
stringBuffer->append(helperObject->getClass()->getName());
    



                            throw Exception(stringBuffer->toString());
                    

                                    }
                                
}




        #endif //ADMIN_TAGHELPERS_INVENTORYITEMVIEWPARENTTAGHELPER_CPP
