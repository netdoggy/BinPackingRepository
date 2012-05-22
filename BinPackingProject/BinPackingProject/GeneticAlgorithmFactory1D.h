//
//  GeneticAlgorithmFactory1D.h
//  BinPackingProject
//
//  Created by Ugljesa Erceg on 5/15/12.
//  Open Source project
//

#import <Foundation/Foundation.h>

@interface GeneticAlgorithmFactory1D : NSObject

@property (nonatomic, readonly) NSUInteger lowestCost;

- (id) initWithNumberOfUnitsInGeneration:(NSUInteger)numberOfUnits 
                              itemsArray:(NSMutableArray *)itemsArray 
                           elitismFactor:(NSUInteger) elitism;

- (void) generationSwap;
- (void) generateInitialPopulation;
- (void) mate:(NSUInteger)crossingPointsNumber;
- (void) mutate:(NSUInteger)mutationFactorPercentage;
- (void) calculateGenerationCost:(NSUInteger (^) (NSMutableArray *)) fitnessFunction;

@end
