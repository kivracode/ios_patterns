//
//  ProductGenerator.h
//  FactoryMethodPattern
//
//  Created by Dima Maleev on 1/23/13.
//  Copyright (c) 2013 mDev. All rights reserved.
//

#import "Product.h"


@interface ProductGenerator : NSObject

-(Product *) getProduct:(int)price;

@end