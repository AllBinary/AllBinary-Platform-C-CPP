
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
        

    private: static const instance: InventoryItemViewParentTagHelper = new InventoryItemViewParentTagHelper();

    public static InventoryItemViewParentTagHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InventoryItemViewParentTagHelper.instance;
    
}


                //@Throws(Exception.constructor)
            
    public InventoryItemView getInventoryItemView(HelperTag inventoryTag){

                        if(inventoryTag != 
                                    null
                                )
                        
                                    {
                                    this.checkForValidationViewHelper(inventoryTag!.getHelper());
    

    validationViewHelper: ValidationViewHelper = inventoryTag!.getHelper() as ValidationViewHelper;;
    

    viewObject: TransformInterface = validationViewHelper!.getViewObject()!;;
    

                        if(viewObject!.getTypeId() != InventoryItemView.TYPE_ID)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Must have ");
    
stringBuffer!.append("InventoryItemView and not: ");
    
stringBuffer!.append(inventoryTag!.getHelper()!.constructor.name.toString()!);
    



                            throw new Exception(stringBuffer!.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewObject as InventoryItemView;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public DownloadableInventoryItemView getDownloadableInventoryItemView(HelperTag inventoryTag){

                        if(inventoryTag != 
                                    null
                                )
                        
                                    {
                                    this.checkForValidationViewHelper(inventoryTag!.getHelper());
    

    validationViewHelper: ValidationViewHelper = inventoryTag!.getHelper() as ValidationViewHelper;;
    

    viewObject: TransformInterface = validationViewHelper!.getViewObject()!;;
    

                        if(viewObject!.getTypeId() != DownloadableInventoryItemView.TYPE_ID)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Must have ");
    
stringBuffer!.append("DownloadableInventoryItemView and not: ");
    
stringBuffer!.append(inventoryTag!.getHelper()!.constructor.name.toString()!);
    



                            throw new Exception(stringBuffer!.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewObject as DownloadableInventoryItemView;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public RequestMapInterface getRequestMapInterface(HelperTag inventoryTag){

                        if(inventoryTag != 
                                    null
                                )
                        
                                    {
                                    this.checkForValidationViewHelper(inventoryTag!.getHelper());
    

    validationViewHelper: ValidationViewHelper = inventoryTag!.getHelper() as ValidationViewHelper;;
    

    viewObject: TransformInterface = validationViewHelper!.getViewObject()!;;
    

                        if(viewObject!.getTypeId() != InventoryItemView.TYPE_ID && viewObject!.getTypeId() != DownloadableInventoryItemView.TYPE_ID)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Must have ");
    
stringBuffer!.append("specific TYPE_ID and not: ");
    
stringBuffer!.append(inventoryTag!.getHelper()!.constructor.name.toString()!);
    



                            throw new Exception(stringBuffer!.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewObject as RequestMapInterface;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Must have parent tag.");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public checkForValidationViewHelper(any = {} helperObject){

                        if(!(helperObject instanceof ValidationViewHelper))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Must have ");
    
stringBuffer!.append("ValidationViewHelper");
    
stringBuffer!.append("and not: ");
    
stringBuffer!.append(helperObject!.constructor.name.toString()!);
    



                            throw new Exception(stringBuffer!.toString());
                    

                                    }
                                
}


};

            

