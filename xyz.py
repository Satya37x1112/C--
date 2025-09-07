from sumy.parsers.plaintext import PlaintextParser
from sumy.nlp.tokenizers import Tokenizer
from sumy.summarizers.lsa import LsaSummarizer

def summarize_paragraph(paragraph, sentence_count=2):
    # Create a PlaintextParser object
    parser = PlaintextParser.from_string(paragraph, Tokenizer("english"))
    
    # Initialize the LSA summarizer
    summarizer = LsaSummarizer()
    
    # Generate summary
    summary = summarizer(parser.document, sentence_count)
    
    # Combine the sentences into a summary string
    return ' '.join(str(sentence) for sentence in summary)

# Example usage
paragraph = """
This paragraph can be as long as you'd like. The script will process it and provide a concise summary based on the content. Using the sumy library ensures efficiency and reliable results.
"""
summary = summarize_paragraph(paragraph)
print("Summary:")
print(summary)