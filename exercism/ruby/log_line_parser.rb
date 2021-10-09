class LogLineParser
  def initialize(line)
    @line = line
  end

  def message
    line_message = @line.split(" ")
    line_message.shift
    line_message.join(" ")
  end

  def log_level
    line_log_level = @line.split(" ").first()
    length_of_level = line_log_level.length - 3
    log_level = line_log_level.slice(1, length_of_level).downcase
  end

  def reformat
    "#{message} (#{log_level})"
  end
end
