def add_prefix_un(word):
    """

    :param word: str of a root word
    :return:  str of root word with un prefix

    This function takes `word` as a parameter and
    returns a new word with an 'un' prefix.
    """

    return 'un' + word

def make_word_groups(vocab_words):
    """

    :param vocab_words: list of vocabulary words with a prefix.
    :return: str of prefix followed by vocabulary words with
             prefix applied, separated by ' :: '.

    This function takes a `vocab_words` list and returns a string
    with the prefix  and the words with prefix applied, separated
     by ' :: '.
    """

    just_the_words = vocab_words

    for i in range(len(just_the_words)):
      if i > 0:
        just_the_words[i] = just_the_words[0]+just_the_words[i]



    return ' :: '.join(just_the_words)


def remove_suffix_ness(sentence):
    """

    :param sentence: str that uses the word in sentence
    :param index:  index of the word to remove and transform
    :return:  str word that changes the extracted adjective to a verb.

    A function takes a `sentence` using the
    vocabulary word, and the `index` of the word once that sentence
    is split apart.  The function should return the extracted
    adjective as a verb.
    """

    sentence_list = list(sentence) 
    initial_index = len(sentence_list) - 4
    print(sentence_list)
    del sentence_list[initial_index:]

    print(sentence_list)
    if sentence_list[-1] == 'i':
        sentence_list[-1] = 'y'

    return ''.join(sentence_list)


def noun_to_verb(sentence, index):
    """

    :param sentence: str that uses the word in sentence
    :param index:  index of the word to remove and transform
    :return:  str word that changes the extracted adjective to a verb.

    A function takes a `sentence` using the
    vocabulary word, and the `index` of the word once that sentence
    is split apart.  The function should return the extracted
    adjective as a verb.
    """
    splited_sentence = sentence.split()
    print(splited_sentence)
    if(index == -1):
      print(list(splited_sentence[-1]))
      last_without_dot = list(splited_sentence[-1])
      del last_without_dot[-1]
      print(last_without_dot)
      splited_sentence[-1] = ''.join(last_without_dot)

    print(splited_sentence)
    splited_sentence[index] = splited_sentence[index] + "en"

    return splited_sentence[index]


