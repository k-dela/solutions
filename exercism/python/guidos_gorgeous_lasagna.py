EXPECTED_BAKE_TIME = 40
PREPARATION_TIME = 2

def bake_time_remaining(time_in_the_oven):
    '''
    Return how many minutes are left to be done cooking

    Takes one number representing how many minutes the lasagna has spent inside the oven
    '''
    result = EXPECTED_BAKE_TIME - time_in_the_oven
    print(result)
    return result

def preparation_time_in_minutes(num_of_layers):
    '''
    Return the amount of minutes it takes to prepare lasagna

    Takes one number representing the number of layers of the lasagna we want to cook
    '''
    return num_of_layers * PREPARATION_TIME

def elapsed_time_in_minutes(number_of_layers, 
elapsed_bake_time):
    '''
    Return how much time has been spent cooking

    Takes two numbers, the number of layers and the number of minutes the lasagna has been baking in the oven
    '''
    return (number_of_layers * 2) + elapsed_bake_time
        
